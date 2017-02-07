////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Carburant.cpp
/// \date			02/02/2017 - MAJ 07/02/2017
/// \description	Implementation de la classe Carburant
////////////////////////////////////////////////////////////////////////////////

#include "Carburant.h"

/*******************************************************************************
* Fonction:		Carburant::Carburant
* Description:	Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
********************************************************************************/
Carburant::Carburant()
{
}

/*******************************************************************************
* Fonction:		Aileron::obtenirPoussee
* Description:	accessor de poussee_
* Paramètres:	aucun
* Retour:		(Donnee) la poussee du carburant
********************************************************************************/
Donnee Carburant::obtenirPoussee() const
{
	return poussee_;
}


/*******************************************************************************
* Fonction:		Aileron::obtenirPression
* Description:	accessor de pression_
* Paramètres:	aucun
* Retour:		(Donnee) la pression du carburant
********************************************************************************/
Donnee Carburant::obtenirPression() const
{
	return pression_;
}

/*******************************************************************************
* Fonction:		Carburant::mettrePoussee
* Description:	mutator de poussee_
* Paramètres:	- (Donnee) poussee :		a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Carburant::mettrePoussee(Donnee poussee)
{
	poussee_ = poussee;
}

/*******************************************************************************
* Fonction:		Carburant::mettrePression
* Description:	mutator de pression_
* Paramètres:	- (Donnee) pression :		a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Carburant::mettrePression(Donnee pression)
{
	pression_ = pression;
}