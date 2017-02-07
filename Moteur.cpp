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
* Param�tres:	aucun
* Retour:		aucun
********************************************************************************/
Moteur::Moteur()
{
}

/*******************************************************************************
* Fonction:		Moteur::obtenirForme
* Description:	accessor de forme_
* Param�tres:	aucun
* Retour:		(string) la forme du moteur
********************************************************************************/
string Moteur::obtenirForme() const
{
	return forme_;
}

/*******************************************************************************
* Fonction:		Moteur::obtenirPoussee
* Description:	accessor de pousse_
* Param�tres:	aucun
* Retour:		(Donnee) la poussee du moteur
********************************************************************************/
Donnee Moteur::obtenirPoussee() const
{
	return poussee_;
}

/*******************************************************************************
* Fonction:		Moteur::obtenirTemperature
* Description:	accessor de temperature_
* Param�tres:	aucun
* Retour:		(Donnee) la temperature du moteur
********************************************************************************/
Donnee Moteur::obtenirTemperature() const
{
	return temperature_;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreForme
* Description:	mutator de forme_
* Param�tres:	- (String) forme :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Moteur::mettreForme(string forme)
{
	forme_ = forme;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettrePoussee
* Description:	mutator de pousse_
* Param�tres:	- (Donnee) pousse :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Moteur::mettrePoussee(Donnee poussee)
{
	poussee_ = poussee;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreTemperature
* Description:	mutator de temperature_
* Param�tres:	- (Donnee) temperature :			a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Moteur::mettreTemperature(Donnee temperature)
{
	temperature_ = temperature;
}