////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Carburant.cpp
/// \date			02/02/2017 - MAJ 03/02/2017
/// \description	Implementation de la classe Aileron
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
* Fonction:		Aileron::obtenirMasse
* Description:	accessor de masse_
* Paramètres:	aucun
* Retour:		(Donnee) la masse du carburant
********************************************************************************/
Donnee Carburant::obtenirMasse() const
{
	return masse_;
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
* Fonction:		Carburant::mettreMasse
* Description:	mutator de masse_
* Paramètres:	- (Donnee) masse :			a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Carburant::mettreMasse(Donnee masse)
{
	masse_ = masse;
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