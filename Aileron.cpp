////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Aileron.cpp
/// \date			02/02/2017
/// \description	Implementation de la classe 
////////////////////////////////////////////////////////////////////////////////

#include "Aileron.h"

/*******************************************************************************
* Fonction:		Aileron::Aileron
* Description:	Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
********************************************************************************/
Aileron::Aileron()
{
}

/*******************************************************************************
* Fonction:		Aileron::obtenirForce
* Description:	accessor de nom_
* Paramètres:	aucun
* Retour:		(string) le nom de la donnee
********************************************************************************/
Donnee Aileron::obtenirForce() const
{
	return force_;
}

Donnee Aileron::obtenirResistance() const
{
	return resistance_;
}

Donnee Aileron::obtenirAire() const
{
	return aire_;
}

string Aileron::obtenirForme() const
{
	return forme_;
}

void Aileron::mettreForce(Donnee force)
{
	force_ = force;
}

void Aileron::mettreResistance(Donnee resistance)
{
	resistance_ = resistance;
}

void Aileron::mettreAire(Donnee aire)
{
	aire_ = aire;
}

void Aileron::mettreForme(string forme)
{
	forme_ = forme;
}
