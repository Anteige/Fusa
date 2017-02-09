////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Forme.h
/// \date			09/02/2017
/// \description	Definition de la classe Forme
////////////////////////////////////////////////////////////////////////////////

#ifndef _FORME_H_
#define _FORME_H_

#include "Donnee.h"

using namespace std;

class Forme
{
public:
	// Constructeurs.
	Forme();

	// Methodes d'acces.
	Donnee obtenirAire();
	string	obtenirForme() const;

private:
	virtual void calculerAire() = 0;
	// Attributs
	Donnee	aire_;
	string	forme_;
};

#endif // _FORME_H_