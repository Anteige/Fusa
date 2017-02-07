////////////////////////////////////////////////////////////////////////////////
/// Fusa			Version 1
/// \auteur			Antoine Gaulin
/// \fichier		Moteur.h
/// \date			02/02/2017 - MAJ 07/02/2017
/// \description	Definition de la classe Moteur
////////////////////////////////////////////////////////////////////////////////

#ifndef _MOTEUR_H_
#define _MOTEUR_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Moteur : ObjetPhysique
{
public:
	// Constructeurs.
	Moteur();

	// Methodes d'acces.
	string	obtenirForme()			const;
	Donnee	obtenirPoussee()		const;
	Donnee	obtenirTemperature()	const;

	// Methodes de modifications.
	void	mettreForme(string forme);
	void	mettrePoussee(Donnee poussee);
	void	mettreTemperature(Donnee temperature);

private:
	// Attributs
	string	forme_;
	Donnee	poussee_;
	Donnee	temperature_;
};

#endif // _MOTEUR_H_