////////////////////////////////////////////////////////////////////////////////
/// Fusa v.1 alpha
/// \auteur			Antoine Gaulin
/// \fichier		Cylindre.h
/// \date			02/02/2017
/// \description	Definition de la classe Cylindre
////////////////////////////////////////////////////////////////////////////////

#ifndef _CYLINDRE_H_
#define _CYLINDRE_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Cylindre : ObjetPhysique
{
public:
	// Constructeur par defaut.
	Cylindre();

	// Methodes d'acces.
	Donnee	obtenirVolume()				const;
	Donnee	obtenirPressionMaximale()	const;

	// Methodes de modifications.
	void	mettreVolume(Donnee volume);
	void	mettrePressionMaximale(Donnee pressionMaximale);

private:
	// Attributs
	Donnee	volume_;
	Donnee	pressionMaximale_;
};

#endif // _Cylindre_H_