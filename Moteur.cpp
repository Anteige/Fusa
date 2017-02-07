////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Moteur.cpp
/// \date			07/02/2017
/// \description	Implementation de la classe Moteur
////////////////////////////////////////////////////////////////////////////////

#include "Moteur.h"

/*******************************************************************************
* Fonction:		Moteur::Moteur
* Description:	Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
********************************************************************************/
Moteur::Moteur()
{
}

/*******************************************************************************
* Fonction:		Moteur::obtenirForme
* Description:	accessor de forme_
* Paramètres:	aucun
* Retour:		(string) la forme du moteur
********************************************************************************/
string Moteur::obtenirForme() const
{
	return forme_;
}

/*******************************************************************************
* Fonction:		Moteur::obtenirPoussee
* Description:	accessor de pousse_
* Paramètres:	aucun
* Retour:		(Donnee) la poussee du moteur
********************************************************************************/
Donnee Moteur::obtenirPoussee() const
{
	return poussee_;
}

/*******************************************************************************
* Fonction:		Moteur::obtenirTemperature
* Description:	accessor de temperature_
* Paramètres:	aucun
* Retour:		(Donnee) la temperature du moteur
********************************************************************************/
Donnee Moteur::obtenirTemperature() const
{
	return temperature_;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreForme
* Description:	mutator de forme_
* Paramètres:	- (String) forme :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Moteur::mettreForme(string forme)
{
	forme_ = forme;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettrePoussee
* Description:	mutator de pousse_
* Paramètres:	- (Donnee) pousse :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Moteur::mettrePoussee(Donnee poussee)
{
	poussee_ = poussee;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreTemperature
* Description:	mutator de temperature_
* Paramètres:	- (Donnee) temperature :			a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Moteur::mettreTemperature(Donnee temperature)
{
	temperature_ = temperature;
}