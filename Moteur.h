////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Moteur.h
/// \date			02/02/2017 - MAJ 24/02/2017
/// \description	Definition de la classe Moteur
////////////////////////////////////////////////////////////////////////////////

#ifndef _MOTEUR_H_
#define _MOTEUR_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Moteur : public ObjetPhysique
{
public:
	// Constructeurs.
	Moteur();

	// Methodes d'acces.
	Donnee	obtenirPoussee()		const;

	// Methodes de modifications.
	void	mettrePoussee(Donnee poussee);

	// Affichage
	friend ostream& operator<<(ostream& out, const Moteur& moteur);

private:
	// Attributs
	Donnee	poussee_;
};

#endif // _MOTEUR_H_