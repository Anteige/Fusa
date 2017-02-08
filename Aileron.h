////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Aileron.h
/// \date			02/02/2017 - MAJ 07/02/2017
/// \description	Definition de la classe Aileron
////////////////////////////////////////////////////////////////////////////////

#ifndef _AILERON_H_
#define _AILERON_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Aileron : public ObjetPhysique
{
public:
	// Constructeurs.
	Aileron();

	// Methodes d'acces.
	Donnee	obtenirAire()		const;
	Donnee	obtenirForce()		const;
	string	obtenirForme()		const;
	Donnee	obtenirResistance()	const;

	// Methodes de modifications.
	void	mettreAire(Donnee aire);
	void	mettreForce(Donnee force);
	void	mettreForme(string forme);
	void	mettreResistance(Donnee resistance);

private:
	// Attributs
	Donnee	aire_;
	Donnee	force_;
	string	forme_;
	Donnee	resistance_;
};

#endif // _AILERON_H_