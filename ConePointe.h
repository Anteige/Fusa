////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		ConePointe.h
/// \date			07/02/2017
/// \description	Definition de la classe ConePointe
////////////////////////////////////////////////////////////////////////////////

#ifndef _CONEPOINTE_H_
#define _CONEPOINTE_H_

#include "Donnee.h"

using namespace std;

class ConePointe
{
public:
	// Constructeurs.
	ConePointe();

	// Methodes d'acces.
	Donnee	obtenirMasse()		const;
	Donnee	obtenirResistance()	const;
	string	obtenirForme()		const;

	// Methodes de modifications.
	void	mettreMasse(Donnee masse);
	void	mettreResistance(Donnee resistance);
	void	mettreForme(string forme);

private:
	// Attributs
	Donnee	resistance_;
	Donnee	masse_;
	string	forme_;
};

#endif // _CONEPOINTE_H_