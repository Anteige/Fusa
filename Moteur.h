////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
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

class Moteur : public ObjetPhysique
{
public:
	// Constructeurs.
	Moteur();

	// Methodes d'acces.
	Donnee	obtenirPoussee()		const;
	Donnee	obtenirTemperature()	const;

	// Methodes de modifications.
	void	mettrePoussee(Donnee poussee);
	void	mettreTemperature(Donnee temperature);

	// Affichage
	friend ostream& operator<<(ostream& out, const Moteur& moteur);

private:
	// Attributs
	Donnee	poussee_;
	Donnee	temperature_;
};

#endif // _MOTEUR_H_