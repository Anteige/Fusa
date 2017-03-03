////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Fusee.cpp
/// \date			07/02/2017
/// \description	Definition de la classe Fusee
////////////////////////////////////////////////////////////////////////////////

#include "../include/Fusee.h"

/*******************************************************************************
* Fonction:		Fusee::Fusee
* Description:	Constructeur par defaut
* Param�tres:	aucun
* Retour:		aucun
********************************************************************************/
Fusee::Fusee()
{
}

/*******************************************************************************
* Fonction:		Fusee::obtenirAileron
* Description:	accessor de aileron_
* Param�tres:	aucun
* Retour:		(Aileron) un aileron de la fusee
********************************************************************************/
Aileron Fusee::obtenirAileron() const
{
	return aileron_;
}

/*******************************************************************************
* Fonction:		Fusee::obtenirCarburant
* Description:	accessor de carburant_
* Param�tres:	aucun
* Retour:		(Carburant) le carburant de la fusee
********************************************************************************/
Carburant Fusee::obtenirCarburant() const
{
	return carburant_;
}

/*******************************************************************************
* Fonction:		Fusee::obtenirPointe
* Description:	accessor de Pointe_
* Param�tres:	aucun
* Retour:		(Pointe) la pointe de la fusee
********************************************************************************/
Pointe Fusee::obtenirPointe() const
{
	return Pointe_;
}

/*******************************************************************************
* Fonction:		Fusee::obtenirCylindre
* Description:	accessor de cylindre_
* Param�tres:	aucun
* Retour:		(Cylindre) le cylindre de la fusee
********************************************************************************/
Cylindre Fusee::obtenirCylindre() const
{
	return cylindre_;
}

/*******************************************************************************
* Fonction:		Fusee::obtenirMoteur
* Description:	accessor de moteur_
* Param�tres:	aucun
* Retour:		(Moteur) le moteur de la fusee
********************************************************************************/
Moteur Fusee::obtenirMoteur() const
{
	return moteur_;
}

/*******************************************************************************
* Fonction:		Fusee::obtenirTrajectoire
* Description:	accessor de trajectoire_
* Param�tres:	aucun
* Retour:		(Trajectoire) la trajectoire de la fusee
********************************************************************************/
Trajectoire Fusee::obtenirTrajectoire() const
{
	return trajectoire_;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreAileron
* Description:	mutator de aileron_
* Param�tres:	- (Aileron) aileron :			a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Fusee::mettreAileron(const Aileron& aileron)
{
	aileron_ = aileron;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreCarburant
* Description:	mutator de carburant_
* Param�tres:	- (Carburant) carburant :		a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Fusee::mettreCarburant(const Carburant& carburant)
{
	carburant_ = carburant;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreConePointe
* Description:	mutator de conePointe_
* Param�tres:	- (ConePointe) ConePointe :		a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Fusee::mettrePointe(const Pointe& Pointe)
{
	Pointe_ = Pointe;
}

/*******************************************************************************
* Fonction:		Trajectoire::mettreCylindre
* Description:	mutator de cylindre_
* Param�tres:	- (Cylindre) cylindre :			a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Fusee::mettreCylindre(const Cylindre& cylindre)
{
	cylindre_ = cylindre;
}

/*******************************************************************************
* Fonction:		Trajectoire:::mettreMoteur
* Description:	mutator de moteur_
* Param�tres:	- (Moteur) moteur :				a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Fusee::mettreMoteur(const Moteur& moteur)
{
	moteur_ = moteur;
}

/*******************************************************************************
* Fonction:		Trajectoire:::mettreTrajectoire
* Description:	mutator de trajectoire_
* Param�tres:	- (Trajectoire) trajectoire :	a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Fusee::mettreTrajectoire(const Trajectoire& trajectoire)
{
	trajectoire_ = trajectoire;
}

ostream & operator<<(ostream & out, const Fusee& fusee)
{
	out << "___________________________________________________________" << endl
		<< "Voici les parametres de la fusee /" << endl << endl
		<< fusee.obtenirMasse() << endl
		<< fusee.obtenirCentreDeMasseEnX()
		<< fusee.obtenirCentreDeMasseEnY()
		<< fusee.obtenirCentreDeMasseEnZ() << endl;
	return out;
}