////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		ObjetPhysique.h
/// \date			07/02/2017
/// \description	Definition de la classe ObjetPhysique
////////////////////////////////////////////////////////////////////////////////

#ifndef _OBJETPHYSIQUE_H_
#define _OBJETPHYSIQUE_H_

#include "Donnee.h"

using namespace std;

enum Axes { AXE_X, AXE_Y, AXE_Z, N_AXES };

class ObjetPhysique
{
public:
	// Constructeurs.
	ObjetPhysique();

	// Methodes d'acces.
	Donnee	obtenirMasse()				const;
	Donnee*	obtenirCentreDeMasseEnX()	const;

	// Methodes de modifications.
	void	mettreMasse(Donnee masse);
	void	mettreCentreDeMasse(Donnee pointX, Donnee pointY, Donnee pointZ);

private:
	// Attributs
	Donnee	masse_;
	Donnee	centreDeMasse_[N_AXES];
};

#endif // _OBJETPHYSIQUE_H_