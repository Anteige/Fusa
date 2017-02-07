////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Fusee.h
/// \date			02/02/2017 - MAJ 07/02/2017
/// \description	Definition de la classe Fusee
////////////////////////////////////////////////////////////////////////////////

#ifndef _FUSEE_H_
#define _FUSEE_H_

#include "Aileron.h"
#include "Carburant.h"
#include "Cylindre.h"
#include "ConePointe.h"
#include "Moteur.h"
#include "Trajectoire.h"

using namespace std;

class Fusee : ObjetPhysique
{
public:
	// Constructeur par defaut.
	Fusee();

	// Methodes d'acces.
	Aileron		obtenirAileron()		const;
	Carburant	obtenirCarburant()		const;
	ConePointe	obtenirConePointe()		const;
	Cylindre	obtenirCylindre()		const;
	Moteur		obtenirMoteur()			const;
	ConePointe	obtenirTrajectoire()	const;

	// Methodes de modifications.
	void	mettreAileron(Aileron aileron);
	void	mettreCarburant(Carburant carburant);
	void	mettreCylindre(Cylindre cylindre);
	void	mettreConePointe(ConePointe conePointe);
	void	mettreMoteur(Moteur moteur);
	void	mettreTrajectoire(Trajectoire trajectoire);

private:
	// Attributs
	Aileron			aileron_;
	Carburant		carburant_;
	Cylindre		cylindre_;
	ConePointe		conePointe_;
	Moteur			moteur_;
	Trajectoire		trajectoire_;
};

#endif // _FUSEE_H_