////////////////////////////////////////////////////////////////////////////////
/// Fusa
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
	Donnee	obtenirDistance()		const;
	Donnee	obtenirTemps()			const;
	Donnee	obtenirAltitudeMax()	const;

	// Methodes de modifications.
	void	mettreDistance(Donnee distance);
	void	mettreTemps(Donnee temps);
	void	mettreAltitudeMax(Donnee altitudeMax);

private:
	// Attributs
	Donnee	distance_;
	Donnee	temps_;
	Donnee	altitudeMax_;
};

#endif // _TRAJECTOIRE_H_