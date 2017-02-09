////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		ObjetPhysique.cpp
/// \date			07/02/2017
/// \description	Implementation de la classe ObjetPhysique
////////////////////////////////////////////////////////////////////////////////

#include "ObjetPhysique.h"

/*******************************************************************************
* Fonction:		ObjetPhysique::ObjetPhysique
* Description:	Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
********************************************************************************/
ObjetPhysique::ObjetPhysique() : masse_(Donnee())
{
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
* Fonction:		ObjetPhysique::mettreCentreDeMasse
* Description:	mutator du vecteur centreDeMasse_
* Paramètres:	- (Donnee) positionX :			a modifier (IN)
				- (Donnee) positionY :			a modifier (IN)
				- (Donnee) positionZ :			a modifier (IN)
* Retour:		aucun
********************************************************************************/
void ObjetPhysique::mettreCentreDeMasse(Donnee positionX, Donnee positionY, Donnee positionZ)
{
	centreDeMasse_[X] = positionX;
	centreDeMasse_[Y] = positionY;
	centreDeMasse_[Z] = positionZ;
}

/*******************************************************************************
* Fonction:		ObjetPhysique::mettreMasse
* Description:	mutator de masse_
* Paramètres:	- (Donnee) masse :				a modifier (IN)
* Retour:		aucun
********************************************************************************/
void ObjetPhysique::mettreMasse(Donnee masse)
{
	masse_ = masse;
}