////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Cylindre.h
/// \date			02/02/2017 - MAJ 07/02/2017
/// \description	Definition de la classe Cylindre
////////////////////////////////////////////////////////////////////////////////

#ifndef _CYLINDRE_H_
#define _CYLINDRE_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Cylindre : public ObjetPhysique
{
public:
	// Constructeur par defaut.
	Cylindre();

	// Methodes d'acces.
	Donnee	obtenirPressionMaximale()	const;

	// Methodes de modifications.
	void	mettrePressionMaximale(Donnee pressionMaximale);

	// Affichage
	friend ostream& operator<<(ostream& out, const Cylindre& cylindre);

private:
	// Attributs
	Donnee	pressionMaximale_;
};

#endif // _Cylindre_H_