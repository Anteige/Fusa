////////////////////////////////////////////////////////////////////////////////
/// Fusa v.1 alpha
/// \auteur			Antoine Gaulin
/// \fichier		Donnee.cpp
/// \date			31/01/2017 - MAJ 02/02/2017
/// \description	Implementation de la classe Donnee
////////////////////////////////////////////////////////////////////////////////

#include "Donnee.h"

/*******************************************************************************
* Fonction:		Donnee::Donnee
* Description:	Constructeur par defaut
* Param�tres:	aucun
* Retour:		aucun
********************************************************************************/
Donnee::Donnee()
{
	nom_ = "";
	valeur_ = 0.0;
	unite_ = "";
}

/*******************************************************************************
* Fonction:		Donnee::Donnee
* Description:	Constructeur par parametres
* Param�tres:	- (string) nom :		a initialiser (IN)
				- (double) valeur :		a initialiser (IN)
				- (string) unite :		a initialiser (IN)
* Retour:		aucun
********************************************************************************/
Donnee::Donnee(string nom, double valeur, string unite)
{
	nom_ = nom;
	valeur_ = valeur;
	unite_ = unite;
}

/*******************************************************************************
* Fonction:		Donnee::obtenirNom
* Description:	accessor de nom_
* Param�tres:	aucun
* Retour:		(string) le nom de la donnee
********************************************************************************/
string Donnee::obtenirNom() const
{
	return nom_;
}

/*******************************************************************************
* Fonction:		Donnee::obtenirValeur
* Description:	accessor de valeur_
* Param�tres:	aucun
* Retour:		(dobule) la valeur de la donnee
********************************************************************************/
double Donnee::obtenirValeur() const
{
	return valeur_;
}

/*******************************************************************************
* Fonction:		Donnee::obtenirUnite
* Description:	accessor de unite_
* Param�tres:	aucun
* Retour:		(dobule) l'unitee de la donnee
********************************************************************************/
string Donnee::obtenirUnite() const
{
	return unite_;
}

/*******************************************************************************
* Fonction:		Donnee::mettreNom
* Description:	mutator de nom_
* Param�tres:	- (string) nom :		a initialiser (IN)
* Retour:		aucun
********************************************************************************/
void Donnee::mettreNom(string nom)
{
	nom_ = nom;
}

/*******************************************************************************
* Fonction:		Donnee::mettreValeur
* Description:	mutator de valeur_
* Param�tres:	- (double) valeur :		a initialiser (IN)
* Retour:		aucun
********************************************************************************/
void Donnee::mettreValeur(double valeur)
{
	valeur_ = valeur;
}

/*******************************************************************************
* Fonction:		Donnee::mettreUnite
* Description:	mutator de unite_
* Param�tres:	- (string) unite :		a initialiser (IN)
* Retour:		aucun
********************************************************************************/
void Donnee::mettreUnite(string unite)
{
	unite_ = unite;
}