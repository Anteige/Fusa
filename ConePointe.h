////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		ConePointe.h
/// \date			07/02/2017
/// \description	Definition de la classe ConePointe
////////////////////////////////////////////////////////////////////////////////

#ifndef _CONEPOINTE_H_
#define _CONEPOINTE_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class ConePointe : ObjetPhysique
{
public:
	// Constructeurs.
	ConePointe();

	// Methodes d'acces.
	string	obtenirForme()		const;
	Donnee	obtenirResistance()	const;

	// Methodes de modifications.
	void	mettreForme(string forme);
	void	mettreResistance(Donnee resistance);

private:
	// Attributs
	Donnee	resistance_;
	string	forme_;
};

#endif // _CONEPOINTE_H_