////////////////////////////////////////////////////////////////////////////////
/// Fusa v.1 alpha
/// \auteur			Antoine Gaulin
/// \fichier		Aileron.h
/// \date			02/02/2017
/// \description	Definition de la classe Aileron
////////////////////////////////////////////////////////////////////////////////

#ifndef _AILERON_H_
#define _AILERON_H_

#include <string>
#include "Donnee.h"

using namespace std;

class Aileron
{
public:
	// Constructeur par defaut.
	Aileron();

	// Destructeur.
	~Aileron();

	// Constructeur par parametres.
	Aileron(Donnee force, Donnee resistance , Donnee aire, string forme);

	// Methodes d'acces.
	Donnee	obtenirForce()		const;
	Donnee	obtenirResistance()	const;
	Donnee	obtenirAire()		const;
	string	obtenirForme()		const;
	//TODO : CG

	// Methodes de modifications.
	void	mettreForce(Donnee force);
	void	mettreResistance(Donnee resistance);
	void	mettreAire(Donnee aire);
	void	mettreForme(string forme);
	//TODO : CG

private:
	// Attributs
	Donnee	force_;
	Donnee	resistance_;
	Donnee	aire_;
	string	forme_;
	//TODO: Ajouter C.G.
};

#endif // _AILERON_H_