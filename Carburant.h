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
	string	obtenirMasse()		const;
	double	obtenirPression()	const;

	// Methodes de modifications.
	void	mettreNom(string nom);
	void	mettreValeur(double nom);
	void	mettreUnite(string unite);

private:
	// Attributs
	Donnee	masse_;
	Donnee	pression_;
};

#endif // _CARBURANT_H_