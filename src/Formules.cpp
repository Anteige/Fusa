////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Formules.cpp
/// \date			03/02/2017
/// \description	Ce fichier contient des formules de bases en physique
////////////////////////////////////////////////////////////////////////////////


#include <cmath>


static const double PI = 3.14;
static const double	GRAVITE = 9.81;


double 
CalculerForce(double masse, double acceleration)
{
	return masse * acceleration;
}


double 
CalculerFriction(double coefficient, double normale)
{
	return coefficient * normale;
}


double 
CalculerEnergieCinetique(double masse, double vitesse)
{
	return (masse * pow( vitesse, 2 )) / 2;
}


double 
CalculerHauteur(double masse, double energie)
{
	return energie / (masse * GRAVITE);
}


double 
CalculerLaCalorimetrie(double masse, double c, double variationDetemps)
{
	return masse * c * variationDetemps;
}


double 
CalculerLaDistanceParcourue(double vitesseInitiale, double temps,
							double acceleration)
{
	return vitesseInitiale * temps * (acceleration * pow( temps, 2 )) / 2;
}


double 
CalculerPuissance(double travail, double temps)
{
	return travail / temps;
}


double 
CalculerAngleDeTorsion(double couple, double longueur, 
					   double momentInertiel, double moduleDeYoung)
{
	return (couple * longueur) / (momentInertiel * moduleDeYoung);
}


double 
CalculerContrainte(double pression, double aire)
{
	return pression / aire;
}


double 
CalculerContrainteCylindriqueL(double pression, double diametre,
							   double epaisseurDeLaParois)
{
	return (pression * diametre) / (4 * epaisseurDeLaParois);
}


double 
CalculerContrainteCylindriqueC(double pression, double diametre,
							   double epaisseurDeLaParois)
{
	return (pression * diametre) / (2 * epaisseurDeLaParois);
}


double 
CalculerContraiteDeCisallementMaximale(double couple, double rayonMax, 
									   double momentInertiel)
{
	return (couple * rayonMax) / momentInertiel;
}


double 
CalculerMomentInertiel(double momentIntertiel, double grandDiametre, 
					   double petitDiametre)
{
	return PI * (pow(grandDiametre, 4) - pow(petitDiametre, 4)) / 32;
}


double 
calculerCouple(double force, double distance)
{
	return force * distance;
}


double 
calculerAireCercle(double rayon)
{
	return 2 * PI * pow( rayon, 2 );
}


double 
calculerAireCylindre(double rayon, double hauteur)  // Comme l'a habillement mimé Pascale.
{
	return 2 * PI * pow( rayon, 2 ) * hauteur;
}


double 
calculerAireRectangle(double base, double hauteur)
{
	return base * hauteur;
}


double 
calculerAireTriangle(double base, double hauteur)
{
	return (base * hauteur) / 2;
}

#pragma endregion fonctions