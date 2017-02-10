////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		ObjetPhysique.h
/// \date			07/02/2017
/// \description	Definition de la classe ObjetPhysique
////////////////////////////////////////////////////////////////////////////////

#ifndef _OBJETPHYSIQUE_H_
#define _OBJETPHYSIQUE_H_

#include "Donnee.h"

using namespace std;

enum Axes { X, Y, Z, N_AXES };

class ObjetPhysique
{
public:
	// Constructeurs.
	ObjetPhysique();

	// Methodes d'acces.
	Donnee	obtenirCentreDeMasseEnX()	const;
	Donnee	obtenirCentreDeMasseEnY()	const;
	Donnee	obtenirCentreDeMasseEnZ()	const;
	Donnee	obtenirMasse()				const;
	string	obtenirForme()		const;

	// Methodes de modifications.
	void	mettreCentreDeMasse(Donnee pointX, Donnee pointY, Donnee pointZ);
	void	mettreMasse(Donnee masse);
	void	mettreForme(string forme);


private:
	// Attributs
	char	forme_[LONGUEUR_MOT_MAX];
	Donnee	centreDeMasse_[N_AXES];
	Donnee	masse_;
};

#endif // _OBJETPHYSIQUE_H_