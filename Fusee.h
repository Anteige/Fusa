////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Fusee.h
/// \date			02/02/2017 - MAJ 07/02/2017
/// \description	Definition de la classe Fusee
////////////////////////////////////////////////////////////////////////////////

#ifndef _FUSEE_H_
#define _FUSEE_H_

#include "Aileron.h"
#include "Carburant.h"
#include "Pointe.h"
#include "Cylindre.h"
#include "Moteur.h"
#include "Trajectoire.h"

using namespace std;

class Fusee : public ObjetPhysique
{
public:
	// Constructeur par defaut.
	Fusee();

	// Methodes d'acces.
	Aileron		obtenirAileron()		const;
	Carburant	obtenirCarburant()		const;
	Pointe		obtenirPointe()			const;
	Cylindre	obtenirCylindre()		const;
	Moteur		obtenirMoteur()			const;
	Trajectoire	obtenirTrajectoire()	const;

	// Methodes de modifications.
	void	mettreAileron(const Aileron& aileron);
	void	mettreCarburant(const Carburant& carburant);
	void	mettrePointe(const Pointe& Pointe);
	void	mettreCylindre(const Cylindre& cylindre);
	void	mettreMoteur(const Moteur& moteur);
	void	mettreTrajectoire(const Trajectoire& trajectoire);

private:
	// Attributs
	Aileron			aileron_;
	Carburant		carburant_;
	Pointe			Pointe_;
	Cylindre		cylindre_;
	Moteur			moteur_;
	Trajectoire		trajectoire_;
};

#endif // _FUSEE_H_