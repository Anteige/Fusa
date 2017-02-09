////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Aileron.h
/// \date			02/02/2017 - MAJ 09/02/2017
/// \description	Definition de la classe Aileron
////////////////////////////////////////////////////////////////////////////////

#ifndef _AILERON_H_
#define _AILERON_H_

#include "ObjetPhysique.h"
#include "Donnee.h"
#include "Forme.h"

using namespace std;

class Aileron : public ObjetPhysique
{
public:
	// Constructeurs.
	Aileron();

	// Methodes d'acces.
	Donnee	obtenirForce()		const;
	Forme*	obtenirForme()		const;
	Donnee	obtenirResistance()	const;

	// Methodes de modifications.
	void	mettreForce(Donnee force);
	void	mettreForme(Forme* forme);
	void	mettreResistance(Donnee resistance);

private:

	// Attributs
	Donnee	force_;
	Forme*	forme_;
	Donnee	resistance_;
};

#endif // _AILERON_H_