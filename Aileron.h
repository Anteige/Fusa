////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Aileron.h
/// \date			02/02/2017 - MAJ 06/02/2017
/// \description	Definition de la classe Aileron
////////////////////////////////////////////////////////////////////////////////

#ifndef _AILERON_H_
#define _AILERON_H_

#include <string>
#include "Donnee.h"

using namespace std;

const int AXE_X = 1, AXE_Y = 1, AXE_Z = 1;

class Aileron
{
public:
	// Constructeurs.
	Aileron();

	// Methodes d'acces.
	Donnee	obtenirForce()		const;
	Donnee	obtenirResistance()	const;
	Donnee	obtenirAire()		const;
	string	obtenirForme()		const;

	// Methodes de modifications.
	void	mettreForce(Donnee force);
	void	mettreResistance(Donnee resistance);
	void	mettreAire(Donnee aire);
	void	mettreForme(string forme);


private:
	// Attributs
	Donnee	force_;
	Donnee	resistance_;
	Donnee	aire_;
	string	forme_;
	double	CentreDeMasse_[AXE_X][AXE_Y][AXE_Z];
};

#endif // _AILERON_H_