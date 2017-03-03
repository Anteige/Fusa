////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		ObjetPhysique.h
/// \date			07/02/2017 - MAJ 24/02/2017
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
	// Constructeur.
	ObjetPhysique();

	// Methodes d'acces.
	string	obtenirForme()				const;
	Donnee	obtenirAire()				const;
	Donnee	obtenirVolume()				const;
	Donnee	obtenirMasse()				const;
	Donnee	obtenirCentreDeMasseEnX()	const;
	Donnee	obtenirCentreDeMasseEnY()	const;
	Donnee	obtenirCentreDeMasseEnZ()	const;
	Donnee	obtenirTemperature()		const;


	// Methodes de modifications.
	void	mettreForme(string forme);
	void	mettreAire(const Donnee& aire);
	void	mettreVolume(const Donnee& volume);
	void	mettreMasse(const Donnee& masse);
	void	mettreCentreDeMasse(const Donnee& pointX, 
								const Donnee& pointY, 
								const Donnee& pointZ);
	void	mettreTemperature(const Donnee& temperature);


private:
	// Attributs
	string	forme_;
	Donnee	aire_;
	Donnee	volume_;
	Donnee	masse_;
	Donnee	centreDeMasse_[N_AXES];
	Donnee	temperature_;
};

#endif // _OBJETPHYSIQUE_H_