////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Fusee.h
/// \date			02/02/2017 - MAJ 07/02/2017
/// \description	Definition de la classe Fusee
////////////////////////////////////////////////////////////////////////////////

#ifndef _FUSEE_H_
#define _FUSEE_H_

#include "Aileron.h"
#include "Carburant.h"
#include "Cylindre.h"
#include "ConePointe.h"
#include "Moteur.h"
#include "Trajectoire.h"

using namespace std;

class Fusee
{
public:
	// Constructeur par defaut.
	Fusee();

	// Destructeur.
	~Fusee();

	// Constructeur par parametres.
	Fusee(Donnee volume, Donnee pressionMaximale, Donnee masse);

private:
	// Attributs
	Aileron*		ailerons_;
	Carburant*		carburant_;
	ConePointe*		conePointe_;
	Moteur*			moteur_;
	Trajectoire*	trajectoire_;
	Donnee			masse_;
	Donnee			centreDeMasse_[N_AXES];
};

#endif // _FUSEE_H_