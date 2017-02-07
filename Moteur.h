////////////////////////////////////////////////////////////////////////////////
/// Fusa v.1 alpha
/// \auteur			Antoine Gaulin
/// \fichier		Moteur.h
/// \date			02/02/2017
/// \description	Definition de la classe Moteur
////////////////////////////////////////////////////////////////////////////////

#ifndef _MOTEUR_H_
#define _MOTEUR_H_

#include "Donnee.h"

using namespace std;

class Moteur
{
public:
	// Constructeurs.
	Moteur();

	// Methodes d'acces.
	Donnee	obtenirMasse()			const;
	Donnee	obtenirPoussee()		const;
	Donnee	obtenirTemperature()	const;
	string	obtenirForme()			const;

	// Methodes de modifications.
	void	mettreMasse(Donnee masse);
	void	mettrePoussee(Donnee poussee);
	void	mettreTemperature(Donnee temperature);
	void	mettreForme(string forme);

private:
	// Attributs
	Donnee	masse_;
	Donnee	poussee_;
	Donnee	temperature_;
	string	forme_;
	Donnee	centreDeMasse_[N_AXES];
};

#endif // _MOTEUR_H_