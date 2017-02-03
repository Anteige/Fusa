////////////////////////////////////////////////////////////////////////////////
/// Fusa v.1 alpha
/// \auteur			Antoine Gaulin
/// \fichier		Cylindre.h
/// \date			02/02/2017
/// \description	Definition de la classe Cylindre
////////////////////////////////////////////////////////////////////////////////

#ifndef _CYLINDRE_H_
#define _CYLINDRE_H_

#include "Donnee.h"

using namespace std;

class Cylindre 
{
public:
	// Constructeur par defaut.
	Cylindre();

	// Constructeur par parametres.
	Cylindre(Donnee volume, Donnee pressionMaximale, Donnee masse);

	// Methodes d'acces.
	Donnee	obtenirVolume()				const;
	Donnee	obtenirPressionMaximale()	const;
	Donnee	obtenirMasse()				const;

	// Methodes de modifications.
	void	mettreVolume(Donnee volume);
	void	mettrePressionMaximale(Donnee pressionMaximale);
	void	mettreMasse(Donnee masse);

private:
	// Attributs
	Donnee	volume_;
	Donnee	pressionMaximale_;
	Donnee	masse_;
};

#endif // _Cylindre_H_