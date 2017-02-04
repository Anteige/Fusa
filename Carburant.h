////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Carburant.h
/// \date			02/02/2017
/// \description	Definition de la classe Carburant
////////////////////////////////////////////////////////////////////////////////

#ifndef _CARBURANT_H_
#define _CARBURANT_H_

#include "Donnee.h"

using namespace std;

class Carburant
{
public:
	// Constructeurs.
	Carburant();

	// Methodes d'acces.
	Donnee	obtenirMasse()		const;
	Donnee	obtenirPression()	const;
	Donnee	obtenirPoussee()	const;

	// Methodes de modifications.
	void	mettreMasse(Donnee masse);
	void	mettrePression(Donnee pression);
	void	mettrePoussee(Donnee poussee);

private:
	// Attributs
	Donnee	masse_;
	Donnee	pression_;
	Donnee	poussee_;
};

#endif // _CARBURANT_H_