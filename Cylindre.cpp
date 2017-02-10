////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Cylindre.cpp
/// \date			02/02/2017 - MAJ 07/02/2017
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
* Fonction:		Cylindre::obtenirVolume
* Description:	accessor de volume_
* Param�tres:	aucun
* Retour:		(Donnee) le volume du cylindre
********************************************************************************/
Donnee Cylindre::obtenirVolume() const
{
	return volume_;
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
* Fonction:		Carburant::operator<<
* Description:	permet l'affichage des parametres du cylindre
* Param�tres:	- (ostream)		out : le flux de sortie
				- (Cylindre)	cylindre : le cylindre a afficher
* Retour:		(ostream) pour l'appel en cascade
*******************************************************************************/
ostream & operator<<(ostream & out, const Cylindre & cylindre)
{
	out << "___________________________________________________________" << endl
		<< "Voici les parametres du cylindre /" << endl << endl
		<< cylindre.obtenirPressionMaximale() << endl
		<< cylindre.obtenirVolume() << endl
		<< cylindre.obtenirMasse() << endl;
	return out;
}
