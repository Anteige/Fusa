////////////////////////////////////////////////////////////////////////////////
/// Fusa v.1 alpha
/// \auteur			Antoine Gaulin
/// \fichier		main.cpp
/// \date			31/12/2016 - MAJ 31/01/2017
/// \description	Implementation de la classe Donnee
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

#include "Donnee.h"
#include "Cylindre.h"

#pragma comment(lib, "winmm.lib")

using namespace std;

#pragma region Constantes

const double	GRAVITE = 9.81,
				PI = 3.14;

#pragma endregion

#pragma region Formules

double CalculerForce(double masse, double acceleration)
{
	return masse * acceleration;
}




double CalculerFriction(double coefficient, double normale)
{
	return coefficient * normale ;
}




double CalculerEnergieCinetique(double masse, double vitesse)
{
	return (masse * pow(vitesse, 2)) / 2;
}




double CalculerHauteur(double masse, double energie)
{
	return energie / (masse * GRAVITE);
}




double CalculerLaCalorimetrie(double masse, double c, double variationDetemps)
{
	return masse * c * variationDetemps;
}




double CalculerLaDistanceParcourue(double vitesseInitiale, double temps, 
								   double acceleration )
{
	return vitesseInitiale * temps * (acceleration * pow(temps , 2)) / 2;
}



double CalculerPuissance(double travail, double temps)
{
	return travail / temps;
}




double CalculerAngleDeTorsion(double couple,
							  double longueur,
							  double momentInertiel,
							  double moduleDeYoung)
{
	return ( couple * longueur ) / ( momentInertiel * moduleDeYoung );
}

double CalculerContrainte(double pression, double aire)
{
	return pression / aire;
}




double CalculerContrainteCylindriqueL(double pression, double diametre, 
									  double epaisseurDeLaParois)
{
	return ( pression * diametre ) / ( 4 * epaisseurDeLaParois );
}



double CalculerContrainteCylindriqueC(double pression, double diametre, 
									  double epaisseurDeLaParois) 
{
	return (pression * diametre) / (2 * epaisseurDeLaParois);
}



double CalculerContraiteDeCisallementMaximale(double couple, double rayonMax,
											  double momentInertiel) 
{
	return ( couple * rayonMax ) / momentInertiel;
}



double CalculerMomentInertiel(double momentIntertiel, double grandDiametre, 
							  double petitDiametre) 
{
	return PI * (pow(grandDiametre, 4) - pow(petitDiametre, 4)) / 32;
}



double calculerCouple(double force, double distance)
{
	return force * distance;
}




double calculerAireCercle(double rayon)
{
	return 2 * PI * pow(rayon, 2);
}




double calculerAireCylindre(double rayon, double hauteur)  // Comme l'a habillement mimé Pascale.
{
	return 2 * PI * pow(rayon, 2) * hauteur;
}




double calculerAireRectangle(double base, double hauteur)
{
	return base * hauteur;
}




double calculerAireTriangle(double base, double hauteur)
{
	return (base * hauteur) / 2;
}

#pragma endregion fonctions

#pragma region Affichage

void DefinirLaPolice()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 7;                 // Largeur
	cfi.dwFontSize.Y = 14;                // Hauteur
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, 9, L"Consola");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}

void NettoyerConsole(bool estAnimation)
{
	HANDLE                     hStdOut;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD                      count;
	DWORD                      cellCount;
	COORD                      homeCoords = { 0, 0 };

	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdOut == INVALID_HANDLE_VALUE) return;

	/* Get the number of cells in the current buffer */
	if (!GetConsoleScreenBufferInfo(hStdOut, &csbi)) return;
	cellCount = csbi.dwSize.X *csbi.dwSize.Y;
	if (!estAnimation) {
		/* Fill the entire buffer with spaces */
		if (!FillConsoleOutputCharacter(
			hStdOut,
			(TCHAR) ' ',
			cellCount,
			homeCoords,
			&count
		)) return;
	}

	/* Fill the entire buffer with the current colors and attributes */
	if (!FillConsoleOutputAttribute(
		hStdOut,
		csbi.wAttributes,
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Move the cursor home */
	SetConsoleCursorPosition(hStdOut, homeCoords);
}

void setcursor(bool visible, DWORD size) // set bool visible = 0 - invisible, bool visible = 1 - visible
{
	if (size == 0)
		size = 20;	// default cursor size Changing to numbers from 1 to 20, decreases cursor width
	
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &lpCursor);
}

void afficherIntroduction() {


		     ////////////////////////////////////////////////////////////////////////////////
	cout << "################################################################################" << endl << endl
		 << "  ==================   ======       ======   ==================     =========" << endl
		 << " |                 |   |    |       |    |   |                |    |         |" << endl
		 << " |      ===========    |    |       |    |   |       =========    |     |     |" << endl
		 << " |      |              |    |       |    |   |       |           |    |   |    | " << endl
		 << " |      ===========    |    |       |    |   |       ========    |    =====     |" << endl
		 << " |                 |   |    |       |    |   |               |   |    _____     |" << endl
		 << " |      ===========    |    |       |    |   |_______        |   |    |    |    |" << endl
		 << " |      |              |    |       |    |           |       |   |    |    |    |" << endl
	 	 << " |      |              |    |       |    |   =========       |   |    |    |    |" << endl
		 << " |      |              |    |=======|    |   |               |   |    |    |    |" << endl
		 << "  ______               __________________    ________________    _____      _____" << endl << endl
		 << "#################################################################################" << endl << endl
		<< "		!| Entreprendre les calculs de fusees autrement |!" << endl << endl << endl << endl;



	Sleep(3000);
	NettoyerConsole(1);
}

#pragma endregion fonctions

int main() {

	DefinirLaPolice();

	cout << "Initialisation..." << endl;
	Sleep(300);

	MoveWindow(GetConsoleWindow(), 50, 50, 620, 460, TRUE);
	Sleep(500);

	NettoyerConsole(1);
	PlaySound(TEXT("./Soundtrack/Intro.wav"), NULL, SND_FILENAME | SND_ASYNC);
	afficherIntroduction();
	NettoyerConsole(0);
	cout << "Voici la musique qui jouera en boucle dans les menus...";
	PlaySound(TEXT("./Soundtrack/MenuPrincipal.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	Sleep(50000000);

} 