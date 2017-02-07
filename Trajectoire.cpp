////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Trajectoire.cpp
/// \date			07/02/2017
/// \description	Impl�mentation de la classe Trajectoire
////////////////////////////////////////////////////////////////////////////////

#include "Trajectoire.h"

/*******************************************************************************
* Fonction:		Trajectoire::Trajectoire
* Description:	Constructeur par defaut
* Param�tres:	aucun
* Retour:		aucun
********************************************************************************/
Trajectoire::Trajectoire()
{

}

/*******************************************************************************
* Fonction:		Trajectoire::obtenirAltitudeMax
* Description:	accessor de altitudeMax_
* Param�tres:	aucun
* Retour:		(Donnee) l'altitude maximale de la trajectoire
********************************************************************************/
Donnee Trajectoire::obtenirAltitudeMax() const
{
	return altitudeMax_;
}

/*******************************************************************************
* Fonction:		Trajectoire::obtenirDistance
* Description:	accessor de distance_
* Param�tres:	aucun
* Retour:		(Donnee) la distance de la trajectoire
********************************************************************************/
Donnee Trajectoire::obtenirDistance() const
{
	return distance_;
}

/*******************************************************************************
* Fonction:		Trajectoire::obtenirTemps
* Description:	accessor de temps_
* Param�tres:	aucun
* Retour:		(Donnee) le temps de la trajectoire
********************************************************************************/
Donnee Trajectoire::obtenirTemps() const
{
	return temps_;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreAltitudeMax
* Description:	mutator de altitudeMax_
* Param�tres:	- (Donnee) altitudeMax :			a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Trajectoire::mettreAltitudeMax(Donnee altitudeMax)
{
	altitudeMax_ = altitudeMax;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreDistance
* Description:	mutator de distance_
* Param�tres:	- (Donnee) distance :				a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Trajectoire::mettreDistance(Donnee distance)
{
	distance_ = distance;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreDistance
* Description:	mutator de temps_
* Param�tres:	- (Donnee) temps :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Trajectoire::mettreTemps(Donnee temps)
{
	temps_ = temps;
}