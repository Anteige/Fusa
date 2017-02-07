////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Carburant.h
/// \date			02/02/2017 - MAJ 03/02/17
/// \description	Definition de la classe Carburant
////////////////////////////////////////////////////////////////////////////////

#ifndef _CARBURANT_H_
#define _CARBURANT_H_

#include "Donnee.h"
#include "ObjetPhysique.h"

using namespace std;

class Carburant : ObjetPhysique
{
public:
	// Constructeurs.
	Carburant();

	// Methodes d'acces.
	Donnee	obtenirPression()	const;
	Donnee	obtenirPoussee()	const;

	// Methodes de modifications.
	void	mettrePression(Donnee pression);
	void	mettrePoussee(Donnee poussee);

private:
	// Attributs
	Donnee	pression_;
	Donnee	poussee_;
};

#endif // _CARBURANT_H_