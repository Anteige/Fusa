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

ostream & operator<<(ostream & out, const Moteur & moteur)
{
	out << setfill(' ')
		<< "___________________________________________________________" << endl
		<< "Voici les parametres du moteur " << "en forme de "
		<< moteur.obtenirForme() << ' ' << "/ " << endl << endl
		<< moteur.obtenirMasse() << endl
		<< moteur.obtenirPoussee() << endl
		<< moteur.obtenirTemperature() << endl
		<< moteur.obtenirCentreDeMasseEnX()
		<< moteur.obtenirCentreDeMasseEnY()
		<< moteur.obtenirCentreDeMasseEnZ() << endl;
	return out;
}
