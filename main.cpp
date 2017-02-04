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

#include "Fusee.h"
#include "Formules.cpp"

#pragma comment(lib, "winmm.lib")

using namespace std;

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

		for (int i = 0; i < 7; i++) {

			cout << "		######################################################################################" << endl << endl
				<< "		   ==================   ======       ======   ==================      =========" << endl
				<< "		  |                 |   |    |       |    |   |                |     |         |" << endl
				<< "		  |      ===========    |    |       |    |   |       =========     |     |     |" << endl
				<< "		  |      |              |    |       |    |   |       |            |    |   |    | " << endl
				<< "		  |      ===========    |    |       |    |   |       ========     |    =====     |" << endl
				<< "		  |                 |   |    |       |    |   |               |    |    _____     |" << endl
				<< "		  |      ===========    |    |       |    |   |_______        |    |    |    |    |" << endl
				<< "		  |      |              |    |       |    |           |       |    |    |    |    |" << endl
				<< "		  |      |              |    |       |    |   =========       |    |    |    |    |" << endl
				<< "		  |      |              |    |=======|    |   |               |    |    |    |    |" << endl
				<< "		   ______               __________________    ________________     _____      _____" << endl << endl
				<< "		######################################################################################" << endl << endl
				<< "		!| Entreprendre les calculs de fusees autrement |!" << endl << endl << endl << endl;

			if (i == 0) {
				cout << "	~ ]|\\       [\\ " << endl
					<< "	 ~ }|)))))))))))))))>" << endl
					<< "	~ ]|/       [/ " << endl << endl << endl << endl << endl << endl
					<< "	version 2.0 Alpha				 Developpe par Antoine Gaulin | Team Skywatchers | 2017" << endl;
				Sleep(400);
				setcursor(0, 0);
				NettoyerConsole(1);
			}

			if (i == 1) {
				cout << "			~ ]|\\       [\\ " << endl
					<< "			~  }|)))))))))))))))>" << endl
					<< "			~ ]|/       [/ " << endl << endl << endl << endl << endl << endl
					<< "	version 2.0 Alpha				 Developpe par Antoine Gaulin | Team Skywatchers | 2017" << endl;
				Sleep(770);
				NettoyerConsole(1);
			}

			if (i == 2) {
				cout << "					~ ]|\\       [\\ " << endl
					<< "					 ~ }|)))))))))))))))>" << endl
					<< "					~ ]|/       [/ " << endl << endl << endl << endl << endl << endl
					<< "	version 2.0 Alpha				 Developpe par Antoine Gaulin | Team Skywatchers | 2017" << endl;
				Sleep(400);
				NettoyerConsole(1);
			}

			if (i == 3) {
				cout << "						~ ]|\\       [\\ " << endl
					<< "						~  }|)))))))))))))))>" << endl
					<< "						~ ]|/       [/ " << endl << endl << endl << endl << endl << endl
					<< "	version 2.0 Alpha				 Developpe par Antoine Gaulin | Team Skywatchers | 2017" << endl;
				Sleep(450);;
				NettoyerConsole(1);
			}

			if (i == 4) {
				cout << "								~ ]|\\       [\\ " << endl
					<< "								 ~ }|)))))))))))))))>" << endl
					<< "								~ ]|/       [/ " << endl << endl << endl << endl << endl << endl
					<< "	version 2.0 Alpha				 Developpe par Antoine Gaulin | Team Skywatchers | 2017" << endl;
				Sleep(450);
				NettoyerConsole(1);
			}

			if (i == 5) {
				cout << "										~ ]|\\       [\\ " << endl
					<< "									 	~  }|)))))))))))))))>" << endl
					<< "										~ ]|/       [/ " << endl << endl << endl << endl << endl << endl
					<< "	version 2.0 Alpha				 Developpe par Antoine Gaulin | Team Skywatchers | 2017" << endl;
				Sleep(1300);
				NettoyerConsole(1);
			}

			if (i == 6) {
				cout << endl
					<< "						Decollage reussi!" << endl
					<< endl;
			}
		}
		Sleep(4000);
		NettoyerConsole(1);
	}

#pragma endregion fonctions

int main() {
	DefinirLaPolice();
	cout << "Initialisation..." << endl;
	Sleep(300);

	MoveWindow(GetConsoleWindow(), 50, 50, 850, 460, TRUE);
	Sleep(500);

	NettoyerConsole(1);
	PlaySound(TEXT("./Soundtrack/Intro.wav"), NULL, SND_FILENAME | SND_ASYNC);
	afficherIntroduction();
	NettoyerConsole(0);
	cout << "Voici la musique qui jouera en boucle dans les menus...";
	PlaySound(TEXT("./Soundtrack/MenuPrincipal.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	Sleep(50000000);

} 