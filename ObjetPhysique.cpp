////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		ObjetPhysique.cpp
/// \date			07/02/2017 - MAJ 24/02/2017
/// \description	Implementation de la classe ObjetPhysique
////////////////////////////////////////////////////////////////////////////////

#include "ObjetPhysique.h"

/*******************************************************************************
* Fonction:		ObjetPhysique::ObjetPhysique
* Description:	Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
********************************************************************************/
ObjetPhysique::ObjetPhysique() :
	aire_				(Donnee("Aire")),
	forme_				("Quelconque"),
	masse_				(Donnee("Masse")),
	temperature_		(Donnee("Temperature")),
	volume_				(Donnee("Volume"))
{
	centreDeMasse_[X] = Donnee("Position en X");
	centreDeMasse_[Y] = Donnee("Position en Y");
	centreDeMasse_[Z] = Donnee("Position en Z");
}

/*******************************************************************************
* Fonction:		ObjetPhysique::obtenirForme
* Description:	accessor de forme_
* Paramètres:	aucun
* Retour:		(Donnee) la forme de l'objet
********************************************************************************/
string ObjetPhysique::obtenirForme() const
{
	return forme_;
}

/*******************************************************************************
* Fonction:		ObjetPhysique::obtenirAire
* Description:	accessor de aire_
* Paramètres:	aucun
* Retour:		(Donnee) L'aire de l'objet
********************************************************************************/
Donnee ObjetPhysique::obtenirAire() const
{
	return aire_;
}

/*******************************************************************************
* Fonction:		ObjetPhysique::obtenirVolume
* Description:	accessor de volume_
* Paramètres:	aucun
* Retour:		(Donnee) le volume de l'objet
********************************************************************************/
Donnee ObjetPhysique::obtenirVolume() const
{
	return volume_;
}

/*******************************************************************************
* Fonction:		ObjetPhysique::obtenirMasse
* Description:	accessor de masse_
* Paramètres:	aucun
* Retour:		(Donnee) la masse de l'objet
********************************************************************************/
Donnee ObjetPhysique::obtenirMasse() const
{
	return masse_;
}

/*******************************************************************************
* Fonction:		ObjetPhysique::obtenirCentreDeMasseEnX
* Description:	accessor d'un element CentreDeMasse_
* Paramètres:	aucun
* Retour:		(Donnee) la position en x du centre de masse
********************************************************************************/
Donnee ObjetPhysique::obtenirCentreDeMasseEnX() const
{
	return centreDeMasse_[X];
}

/*******************************************************************************
* Fonction:		ObjetPhysique::obtenirCentreDeMasseEnY
* Description:	accessor d'un element CentreDeMasse_
* Paramètres:	aucun
* Retour:		(Donnee) la position en y du centre de masse
********************************************************************************/
Donnee ObjetPhysique::obtenirCentreDeMasseEnY() const
{
	return centreDeMasse_[Y];
}

/*******************************************************************************
* Fonction:		ObjetPhysique::obtenirCentreDeMasseEnZ
* Description:	accessor d'un element CentreDeMasse_
* Paramètres:	aucun
* Retour:		(Donnee) la position en z du centre de masse
********************************************************************************/
Donnee ObjetPhysique::obtenirCentreDeMasseEnZ() const
{
	return centreDeMasse_[Z];
}

/*******************************************************************************
* Fonction:		ObjetPhysique::obtenirTemperature
* Description:	accessor de temperature_
* Paramètres:	aucun
* Retour:		(Donnee) la temperature de l'objet
********************************************************************************/
Donnee ObjetPhysique::obtenirTemperature() const
{
	return temperature_;
}

/*******************************************************************************
* Fonction:		ObjetPhysique::mettreForme
* Description:	mutator de forme_
* Paramètres:	- (Donnee) forme :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void ObjetPhysique::mettreForme(string forme)
{
	forme_ = forme;
}

/*******************************************************************************
* Fonction:		ObjetPhysique::mettreAire
* Description:	mutator de aire_
* Paramètres:	- (Donnee) aire :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void ObjetPhysique::mettreAire(const Donnee& aire)
{
	aire_ = aire;
}

/*******************************************************************************
* Fonction:		ObjetPhysique::mettreVolume
* Description:	mutator de volume_
* Paramètres:	- (Donnee) volume :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void ObjetPhysique::mettreVolume(const Donnee& volume)
{
	volume_ = volume;
}

/*******************************************************************************
* Fonction:		ObjetPhysique::mettreMasse
* Description:	mutator de masse_
* Paramètres:	- (Donnee) masse :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void ObjetPhysique::mettreMasse(const Donnee& masse)
{
	masse_ = masse;
}

/*******************************************************************************
* Fonction:		ObjetPhysique::mettreCentreDeMasse
* Description:	mutator du vecteur centreDeMasse_
* Paramètres:	- (Donnee) positionX :				a modifier (IN)
				- (Donnee) positionY :				a modifier (IN)
				- (Donnee) positionZ :				a modifier (IN)
* Retour:		aucun
********************************************************************************/
void ObjetPhysique::mettreCentreDeMasse(const Donnee& positionX, 
										const Donnee& positionY,
										const Donnee& positionZ)
{
	centreDeMasse_[X] = positionX;
	centreDeMasse_[Y] = positionY;
	centreDeMasse_[Z] = positionZ;
}

/*******************************************************************************
* Fonction:		ObjetPhysique::mettreTemperature
* Description:	mutator de temperature_
* Paramètres:	- (Donnee) temperature :			a modifier (IN)
* Retour:		aucun
********************************************************************************/
void ObjetPhysique::mettreTemperature(const Donnee& temperature)
{
	temperature_ = temperature;
}