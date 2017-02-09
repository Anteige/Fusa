////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		ConePointe.cpp
/// \date			07/02/2017
/// \description	Initialisation de la classe ConePointe
////////////////////////////////////////////////////////////////////////////////

#include "ConePointe.h"

/*******************************************************************************
* Fonction:		ConePointe::ConePointe
* Description:	Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
********************************************************************************/
ConePointe::ConePointe()
{
}

/*******************************************************************************
* Fonction:		ConePointe::obtenirForme
* Description:	accessor de forme_
* Paramètres:	aucun
* Retour:		(Donnee) la forme du Cone a la pointe
********************************************************************************/
Forme* ConePointe::obtenirForme() const
{
	return forme_;
}

/*******************************************************************************
* Fonction:		ConePointe::obtenirResistance
* Description:	accessor de resistance_
* Paramètres:	aucun
* Retour:		(Donnee) la resistance du Cone a la pointe
********************************************************************************/
Donnee ConePointe::obtenirResistance() const
{
	return resistance_;
}

/*******************************************************************************
* Fonction:		Cylindre::mettreForme
* Description:	mutator de forme_
* Paramètres:	- (string) forme :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void ConePointe::mettreForme(Forme* forme)
{
	forme_ = forme;
}

/*******************************************************************************
* Fonction:		Cylindre::mettreResistance
* Description:	mutator de resistance_
* Paramètres:	- (Donnee) resistance :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void ConePointe::mettreResistance(Donnee resistance)
{
	resistance_ = resistance;
}