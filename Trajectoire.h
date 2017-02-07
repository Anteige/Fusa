////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Trajectoire.h
/// \date			07/02/2017
/// \description	Definition de la classe Trajectoire
////////////////////////////////////////////////////////////////////////////////

#ifndef _TRAJECTOIRE_H_
#define _TRAJECTOIRE_H_

#include "Donnee.h"

using namespace std;

class Trajectoire
{
public:
	// Constructeurs.
	Trajectoire();

	// Methodes d'acces.
	Donnee	obtenirAltitudeMax()	const;
	Donnee	obtenirDistance()		const;
	Donnee	obtenirTemps()			const;

	// Methodes de modifications.
	void	mettreAltitudeMax(Donnee altitudeMax);
	void	mettreDistance(Donnee distance);
	void	mettreTemps(Donnee temps);

private:
	// Attributs
	Donnee	altitudeMax_;
	Donnee	distance_;
	Donnee	temps_;
};

#endif // _TRAJECTOIRE_H_