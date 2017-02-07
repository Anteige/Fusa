////////////////////////////////////////////////////////////////////////////////
/// Fusa v.1 alpha
/// \auteur			Antoine Gaulin
/// \fichier		Moteur.h
/// \date			02/02/2017
/// \description	Definition de la classe Moteur
////////////////////////////////////////////////////////////////////////////////

#ifndef _MOTEUR_H_
#define _MOTEUR_H_

#include "Donnee.h"

using namespace std;

class Moteur
{
public:
	// Constructeurs.
	Moteur();
	Moteur(Donnee masse, Donnee poussee, Donnee temperature, string forme);

	// Destructeur.
	~Moteur();

private:
	// Attributs
	Donnee	masse_;
	Donnee	poussee_;
	Donnee	temperature_;
	string	forme;
};

#endif // _MOTEUR_H_