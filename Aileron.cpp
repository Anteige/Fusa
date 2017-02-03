////////////////////////////////////////////////////////////////////////////////
/// Fusa v.1 alpha
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
	//TODO
}

/*******************************************************************************
* Fonction:		Aileron::~Aileron
* Description:	Destructeur
* Paramètres:	aucun
* Retour:		aucun
********************************************************************************/
Aileron::~Aileron()
{

}

/*******************************************************************************
* Fonction:		Aileron::Aileron
* Description:	Constructeur par parametres
* Paramètres:	- (Donnee) force :			a initialiser (IN)
				- (Donnee) resistance :		a initialiser (IN)
				- (Donnee) aire :			a initialiser (IN)
				- (String) forme :			a initialiser (IN)
* Retour:		aucun
********************************************************************************/
Aileron::Aileron(Donnee force, Donnee resistance, Donnee aire, string forme)
{
	force_ = force;
	resistance_ = resistance;
	aire_ = aire;
	forme_ = forme;
	//TODO : ajouter C.G.
}

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
