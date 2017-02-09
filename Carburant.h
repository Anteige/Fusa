////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Carburant.h
/// \date			02/02/2017 - MAJ 07/02/2017
/// \description	Definition de la classe Carburant
////////////////////////////////////////////////////////////////////////////////

#ifndef _CARBURANT_H_
#define _CARBURANT_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Carburant : public ObjetPhysique
{
public:
	// Constructeurs.
	Carburant();

	// Methodes d'acces.
	Donnee	obtenirPoussee()	const;
	Donnee	obtenirPression()	const;

	// Methodes de modifications.
	void	mettrePoussee(const Donnee& poussee);
	void	mettrePression(const Donnee& pression);

	// Affichage
	friend ostream& operator<<(ostream& out, const Carburant& carburant);

private:
	// Attributs
	Donnee	poussee_;
	Donnee	pression_;
};

#endif // _CARBURANT_H_