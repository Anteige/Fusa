////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Pointe.h
/// \date			07/02/2017
/// \description	Definition de la classe Pointe
////////////////////////////////////////////////////////////////////////////////

#ifndef _POINTE_H_
#define _POINTE_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Pointe : public ObjetPhysique
{
public:
	// Constructeurs.
	Pointe();

	// Methodes d'acces.
	Donnee	obtenirResistance()	const;

	// Methodes de modifications.
	void	mettreResistance(Donnee resistance);

	// Affichage
	friend ostream& operator<<(ostream& out, const Pointe& pointe);

private:
	// Attributs
	Donnee	resistance_;
};

#endif // _POINTE_H_