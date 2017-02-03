////////////////////////////////////////////////////////////////////////////////
/// Fusa v.1 alpha
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
	// Constructeur par defaut.
	Carburant();

	// Constructeur par defaut.
	~Carburant();

	// Constructeur par parametres.
	Donnee(string nom, double valeur, string unite);

	// Methodes d'acces.
	string	obtenirNom()	const;
	double	obtenirValeur() const;
	string	obtenirUnite()	const;

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