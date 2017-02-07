////////////////////////////////////////////////////////////////////////////////
/// Fusa v.1 alpha
/// \auteur			Antoine Gaulin
/// \fichier		Cylindre.cpp
/// \date			02/02/2017
/// \description	Implementation de la classe Cylindre
////////////////////////////////////////////////////////////////////////////////

#include "Cylindre.h"

/*******************************************************************************
* Fonction:		Cylindre::Cylindre
* Description:	Constructeur par defaut
* Param�tres:	aucun
* Retour:		aucun
********************************************************************************/
Cylindre::Cylindre()
{
}

/*******************************************************************************
* Fonction:		Cylindre::Cylindre
* Description:	Constructeur par parametres
* Param�tres:	- (Donnee) volume :					a initialiser (IN)
				- (Donnee) pressionMaximale :		a initialiser (IN)
				- (Donnee) masse :					a initialiser (IN)
* Retour:		aucun
********************************************************************************/
Cylindre::Cylindre(Donnee volume, Donnee pressionMaximale, Donnee masse)
{
	volume_ = volume;
	pressionMaximale_ = pressionMaximale;
	masse_ = masse;
}

/*******************************************************************************
* Fonction:		Cylindre::obtenirVolume
* Description:	accessor de volume_
* Param�tres:	aucun
* Retour:		(Donnee) le volume du Cylindre
********************************************************************************/
Donnee Cylindre::obtenirVolume() const
{
	return volume_;
}

/*******************************************************************************
* Fonction:		Cylindre::obtenirPressionMaximale
* Description:	accessor de pressionMaximale_
* Param�tres:	aucun
* Retour:		(Donnee) la pression maximale que le cylindre peut supporter
********************************************************************************/
Donnee Cylindre::obtenirPressionMaximale() const
{
	return pressionMaximale_;
}

/*******************************************************************************
* Fonction:		Cylindre::obtenirMasse
* Description:	accessor de masse_
* Param�tres:	aucun
* Retour:		(Donnee) la masse du cylindre
********************************************************************************/
Donnee Cylindre::obtenirMasse() const
{
	return masse_;
}

/*******************************************************************************
* Fonction:		Cylindre::mettreVolume
* Description:	mutator de volume_
* Param�tres:	- (Donnee) volume :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Cylindre::mettreVolume(Donnee volume)
{
	volume_ = volume;
}

/*******************************************************************************
* Fonction:		Cylindre::mettrePressionMaximale
* Description:	mutator de pressionMaximale_
* Param�tres:	- (Donnee) pressionMaximale :		a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Cylindre::mettrePressionMaximale(Donnee pressionMaximale)
{
	pressionMaximale_ = pressionMaximale;
}

/*******************************************************************************
* Fonction:		Cylindre::mettreMasse
* Description:	mutator de masse_
* Param�tres:	- (Donnee) masse :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Cylindre::mettreMasse(Donnee masse)
{
	masse_ = masse;
}
