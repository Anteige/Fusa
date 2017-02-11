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

using namespace std;

class Aileron : public ObjetPhysique
{
public:
	// Constructeurs.
	Aileron();

	// Methodes d'acces.
	Donnee	obtenirForce()		const;
	Donnee	obtenirResistance()	const;
	Donnee	obtenirAire()		const;

	// Methodes de modifications.
	void	mettreForce(const Donnee& force);
	void	mettreResistance(const Donnee& resistance);
	void	mettreAire(const Donnee& aire);

	// Affichage
	friend ostream& operator<<(ostream& out, const Aileron& aileron);

private:

	// Attributs
	Donnee	aire_;
	Donnee	force_;
	Donnee	resistance_;
};

#endif // _AILERON_H_