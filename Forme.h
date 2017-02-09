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
	virtual Donnee obtenirAire() = 0;
	string	obtenirForme() const;

private:
	// Attributs
	Donnee	aire_;
	string	forme_;
};

#endif // _FORME_H_