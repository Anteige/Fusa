////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Donnee.cpp
/// \date			31/01/2017 - MAJ 07/02/2017
/// \description	Implementation de la classe Donnee
////////////////////////////////////////////////////////////////////////////////

#include "Donnee.h"

/*******************************************************************************
* Fonction:		Donnee::Donnee
* Description:	Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
********************************************************************************/
Donnee::Donnee()
{
	strcpy(nom_, "Parametre 0 ////");
	valeur_ = 0.0;
	strcpy(unite_, "unites");
}

/*******************************************************************************
* Fonction:		Donnee::Donnee
* Description:	Constructeur par parametres
* Paramètres:	- (string) nom :		a initialiser (IN)
				- (double) valeur :		a initialiser (IN)
				- (string) unite :		a initialiser (IN)
* Retour:		aucun
********************************************************************************/
Donnee::Donnee(string nom, double valeur, string unite)
{
	strcpy(nom_, nom.c_str());
	valeur_ = valeur;
	strcpy(unite_, unite.c_str());
}

/*******************************************************************************
* Fonction:		Donnee::obtenirNom
* Description:	accessor de nom_
* Paramètres:	aucun
* Retour:		(string) le nom de la donnee
********************************************************************************/
string Donnee::obtenirNom() const
{
	return string(nom_);
}

/*******************************************************************************
* Fonction:		Donnee::obtenirValeur
* Description:	accessor de valeur_
* Paramètres:	aucun
* Retour:		(dobule) la valeur de la donnee
********************************************************************************/
double Donnee::obtenirValeur() const
{
	return valeur_;
}

/*******************************************************************************
* Fonction:		Donnee::obtenirUnite
* Description:	accessor de unite_
* Paramètres:	aucun
* Retour:		(dobule) l'unitee de la donnee
********************************************************************************/
string Donnee::obtenirUnite() const
{
	return string(unite_);
}

/*******************************************************************************
* Fonction:		Donnee::mettreNom
* Description:	mutator de nom_
* Paramètres:	- (string) nom :		a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Donnee::mettreNom(string nom)
{
	strcpy(nom_, nom.c_str());
}

/*******************************************************************************
* Fonction:		Donnee::mettreValeur
* Description:	mutator de valeur_
* Paramètres:	- (double) valeur :		a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Donnee::mettreValeur(double valeur)
{
	valeur_ = valeur;
}

/*******************************************************************************
* Fonction:		Donnee::mettreUnite
* Description:	mutator de unite_
* Paramètres:	- (string) unite :		a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Donnee::mettreUnite(string unite)
{
	strcpy(unite_, unite.c_str());
}

/****************************************************************************
* Fonction:		Donnee::operator<<
* Description:	permet l'affichage d'une donnee
* Paramètres:	- (ostream) out : le flux de sortie
				- (donnee)	donnee : la donnee a afficher
* Retour:		(ostream) pour l'appel en cascade
****************************************************************************/
ostream& operator<<(ostream& out, const Donnee& donnee)
{
	out << donnee.obtenirNom() << ' ' << donnee.obtenirValeur() << ' ' << donnee.obtenirUnite();
	return out;
}