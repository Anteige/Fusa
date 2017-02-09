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
#include "Forme.h"
#include "Donnee.h"

using namespace std;

class ConePointe : public ObjetPhysique
{
public:
	// Constructeurs.
	ConePointe();

	// Methodes d'acces.
	Forme*	obtenirForme()		const;
	Donnee	obtenirResistance()	const;

	// Methodes de modifications.
	void	mettreForme(Forme* forme);
	void	mettreResistance(Donnee resistance);

private:
	// Attributs
	Donnee	resistance_;
	Forme*	forme_;
};

#endif // _CONEPOINTE_H_