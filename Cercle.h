////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Cercle.h
/// \date			09/02/2017
/// \description	Definition de la classe Cercle
////////////////////////////////////////////////////////////////////////////////

#ifndef _CERCLE_H_
#define _CERCLE_H_

#include "Donnee.h"
#include "Forme.h"

using namespace std;

static const double PI = 3.14;

class Cercle : public Forme
{
public:
	// Constructeurs.
	Cercle();

	// Methodes d'acces.
	Donnee obtenirAire();

	void mettreRayon(Donnee rayon);

private:
	// Attributs
	Donnee rayon_;
};

#endif // _CERCLE_H_