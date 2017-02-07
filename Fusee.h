////////////////////////////////////////////////////////////////////////////////
/// Fusa v.1 alpha
/// \auteur			Antoine Gaulin
/// \fichier		Fusee.h
/// \date			02/02/2017
/// \description	Definition de la classe Fusee
////////////////////////////////////////////////////////////////////////////////

#ifndef _FUSEE_H_
#define _FUSEE_H_

#include "Aileron.h"
#include "Carburant.h"
#include "Donnee.h"

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
	Aileron*	ailerons_;
	Donnee		masse_;
};

#endif // _FUSEE_H_