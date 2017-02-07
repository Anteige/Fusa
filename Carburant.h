////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Carburant.h
/// \date			02/02/2017 - MAJ 07/02/17
/// \description	Definition de la classe Carburant
////////////////////////////////////////////////////////////////////////////////

#ifndef _CARBURANT_H_
#define _CARBURANT_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Carburant : ObjetPhysique
{
public:
	// Constructeurs.
	Carburant();

	// Methodes d'acces.
	Donnee	obtenirPoussee()	const;
	Donnee	obtenirPression()	const;

	// Methodes de modifications.
	void	mettrePoussee(Donnee poussee);
	void	mettrePression(Donnee pression);

private:
	// Attributs
	Donnee	poussee_;
	Donnee	pression_;
};

#endif // _CARBURANT_H_