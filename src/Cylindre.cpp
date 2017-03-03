////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Cylindre.cpp
/// \date			02/02/2017 - MAJ 24/02/2017
/// \description	Implementation de la classe Cylindre
////////////////////////////////////////////////////////////////////////////////

#include "../include/Cylindre.h"

/*******************************************************************************
* Fonction:		Cylindre::Cylindre
* Description:	Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
********************************************************************************/
Cylindre::Cylindre() : pressionMaximale_(Donnee("Pression Maximale"))
{
}

/*******************************************************************************
* Fonction:		Cylindre::obtenirPressionMaximale
* Description:	accessor de pressionMaximale_
* Paramètres:	aucun
* Retour:		(Donnee) la pression maximale que le cylindre peut supporter
********************************************************************************/
Donnee Cylindre::obtenirPressionMaximale() const
{
	return pressionMaximale_;
}

/*******************************************************************************
* Fonction:		Cylindre::mettrePressionMaximale
* Description:	mutator de pressionMaximale_
* Paramètres:	- (Donnee) pressionMaximale :		a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Cylindre::mettrePressionMaximale(Donnee pressionMaximale)
{
	pressionMaximale_ = pressionMaximale;
}

/*******************************************************************************
* Fonction:		Carburant::operator<<
* Description:	permet l'affichage des parametres du cylindre
* Paramètres:	- (ostream)		out : le flux de sortie
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
