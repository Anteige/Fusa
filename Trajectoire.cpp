////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Trajectoire.cpp
/// \date			07/02/2017
/// \description	Implémentation de la classe Trajectoire
////////////////////////////////////////////////////////////////////////////////

#include "Trajectoire.h"

/*******************************************************************************
* Fonction:		Trajectoire::Trajectoire
* Description:	Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
********************************************************************************/
Trajectoire::Trajectoire()
{

}

/*******************************************************************************
* Fonction:		Trajectoire::obtenirAltitudeMax
* Description:	accessor de altitudeMax_
* Paramètres:	aucun
* Retour:		(Donnee) l'altitude maximale de la trajectoire
********************************************************************************/
Donnee Trajectoire::obtenirAltitudeMax() const
{
	return altitudeMax_;
}

/*******************************************************************************
* Fonction:		Trajectoire::obtenirDistance
* Description:	accessor de distance_
* Paramètres:	aucun
* Retour:		(Donnee) la distance de la trajectoire
********************************************************************************/
Donnee Trajectoire::obtenirDistance() const
{
	return distance_;
}

/*******************************************************************************
* Fonction:		Trajectoire::obtenirTemps
* Description:	accessor de temps_
* Paramètres:	aucun
* Retour:		(Donnee) le temps de la trajectoire
********************************************************************************/
Donnee Trajectoire::obtenirTemps() const
{
	return temps_;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreAltitudeMax
* Description:	mutator de altitudeMax_
* Paramètres:	- (Donnee) altitudeMax :			a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Trajectoire::mettreAltitudeMax(Donnee altitudeMax)
{
	altitudeMax_ = altitudeMax;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreDistance
* Description:	mutator de distance_
* Paramètres:	- (Donnee) distance :				a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Trajectoire::mettreDistance(Donnee distance)
{
	distance_ = distance;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreDistance
* Description:	mutator de temps_
* Paramètres:	- (Donnee) temps :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Trajectoire::mettreTemps(Donnee temps)
{
	temps_ = temps;
}