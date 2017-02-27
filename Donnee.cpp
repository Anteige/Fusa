////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Donnee.cpp
/// \date			31/01/2017 - MAJ 26/02/2017
/// \description	Implementation de la classe Donnee
////////////////////////////////////////////////////////////////////////////////

#include "iostream"
#include "Donnee.h"

/*******************************************************************************
* Fonction:		Donnee::Donnee
* Description:	Constructeur par parametres
* Paramètres:	- (string) nom :		a initialiser (IN)
				- (double) valeur :		a initialiser (IN)
				- (string) unite :		a initialiser (IN)
* Retour:		aucun
********************************************************************************/
Donnee::Donnee(string nom, double valeur, string unite) :
	nom_(nom), valeur_(valeur), unite_(unite)
{
}

/*******************************************************************************
* Fonction:		Donnee::obtenirNom
* Description:	accessor de nom_
* Paramètres:	aucun
* Retour:		(string) le nom de la donnee
********************************************************************************/
string Donnee::obtenirNom() const
{
	return nom_;
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
	return unite_;
}

/*******************************************************************************
* Fonction:		Donnee::mettreNom
* Description:	mutator de nom_
* Paramètres:	- (string) nom :		a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Donnee::mettreNom(string nom)
{
	nom_ = nom;
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
	unite_ = unite;
}

/********************************************************************************
* Fonction:		Donnee::operator+
* Description:	permet l'addition d'une donnee avec une autre donnee
* Paramètres:	- (donnee)	donnee : la donnee a additionner
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee Donnee::operator+(const Donnee& donnee) const
{
	Donnee resultat(nom_, valeur_, unite_);

	if (donnee.nom_ != nom_ || donnee.unite_ != unite_) {
		cout << "/!\\ ERREUR lors de la soustraction de donnees : "
			 << "Il n'est pas possible d'additionner ";
		if (donnee.nom_ != nom_)
			cout << "deux donnees de nom differents." << endl;
		else
			cout << "deux donnees d'unites differentes." << endl;
	}
	else
		resultat.valeur_ += donnee.valeur_;

	return resultat;
}

/********************************************************************************
* Fonction:		Donnee::operator+
* Description:	permet l'addition d'une donnee avec un nombre reel
* Paramètres:	- (double)	nombre : le nombre a additionner
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee Donnee::operator+(const double& nombre) const
{
	Donnee resultat(nom_, valeur_, unite_);
	resultat.valeur_ += nombre;
	return resultat;
}

/********************************************************************************
* Fonction:		Donnee::operator+
* Description:	permet la commutativité de l'addition
* Paramètres:	- (double)	nombre : le nombre a additionner
				- (Donnee)	donner : la donnee a additionner
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee operator+(const double& nombre, const Donnee& donnee)
{
	return donnee + nombre;
}

/********************************************************************************
* Fonction:		Donnee::operator-
* Description:	permet la soustraction d'une donnee avec une autre donnee
* Paramètres:	- (donnee)	donnee : la donnee a soustraire
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee Donnee::operator-(const Donnee& donnee) const
{
	Donnee resultat(nom_, valeur_, unite_);

	if (donnee.nom_ != nom_ || donnee.unite_ != unite_) {
		cout << "/!\\ ERREUR lors de la soustraction de donnees : "
			 << "Il n'est pas possible de soustraire ";
		if (donnee.nom_ != nom_)
			cout << "deux donnees de nom differents." << endl;
		else
			cout << "deux donnees d'unites differentes." << endl;
	}
	else
		resultat.valeur_ -= donnee.valeur_;

	return resultat;
}

/********************************************************************************
* Fonction:		Donnee::operator-
* Description:	permet la soustraction d'une donnee avec un nombre reel
* Paramètres:	- (double)	nombre : le nombre a soustraire
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee Donnee::operator-(const double& nombre) const
{
	Donnee resultat(nom_, valeur_, unite_);
	resultat.valeur_ -= nombre;
	return resultat;
}

/********************************************************************************
* Fonction:		Donnee::operator-
* Description:	permet la commutativité de l'addition
* Paramètres:	- (double)	nombre : le nombre a soustraire
				- (Donnee)	donner : la donnee a soustraire
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee operator-(const double& nombre, const Donnee& donnee)
{
	return donnee - nombre;
}


/********************************************************************************
* Fonction:		Donnee::operator*
* Description:	permet la multiplication d'une donnee avec une autre donnee
* Paramètres:	- (donnee)	donnee : le multiplicateur
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee Donnee::operator*(const Donnee& donnee) const
{
	Donnee resultat(nom_, valeur_, unite_);

	if (donnee.nom_ != nom_ || donnee.unite_ != unite_) {
		cout << "/!\\ ERREUR lors de la soustraction de donnees : "
			 << "Il n'est pas possible de multiplier ";
		if (donnee.nom_ != nom_)
			cout << "deux donnees de nom differents." << endl;
		else
			cout << "deux donnees d'unites differentes." << endl;
	}
	else
		resultat.valeur_ *= donnee.valeur_;

	return resultat;
}

/********************************************************************************
* Fonction:		Donnee::operator*
* Description:	permet la multiplication d'une donnee avec un nombre reel
* Paramètres:	- (double)	nombre : le multiplicateur
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee Donnee::operator*(const double& nombre) const
{
	Donnee resultat(nom_, valeur_, unite_);
	resultat.valeur_ *= nombre;
	return resultat;
}

/********************************************************************************
* Fonction:		Donnee::operator*
* Description:	permet la commutativité de l'addition
* Paramètres:	- (double)	nombre : le multiplicateur
- (Donnee)	donner : la donnee a multiplier
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee operator*(const double& nombre, const Donnee& donnee)
{
	return donnee * nombre;
}

/********************************************************************************
* Fonction:		Donnee::operator/
* Description:	permet la division d'une donnee avec une autre donnee
* Paramètres:	- (donnee)	donnee : le diviseur
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee Donnee::operator/(const Donnee& donnee) const
{
	Donnee resultat(nom_, valeur_, unite_);

	if (donnee.nom_ != nom_ || donnee.unite_ != unite_) {
		cout << "/!\\ ERREUR lors de la division de donnees : "
			 << "Il n'est pas possible de diviser ";
		if (donnee.nom_ != nom_)
			cout << "deux donnees de nom differents." << endl;
		else
			cout << "deux donnees d'unites differentes." << endl;
	}
	else
		resultat.valeur_ /= donnee.valeur_;

	return resultat;
}

/********************************************************************************
* Fonction:		Donnee::operator/
* Description:	permet la division d'une donnee avec un nombre reel
* Paramètres:	- (double)	nombre : le diviseur
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee Donnee::operator/(const double& nombre) const
{
	Donnee resultat(nom_, valeur_, unite_);
	resultat.valeur_ /= nombre;
	return resultat;
}

/********************************************************************************
* Fonction:		Donnee::operator/
* Description:	permet la commutativité de l'addition
* Paramètres:	- (double)	nombre : le diviseur
				- (Donnee)	donner : la donnee a diviser
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee operator/(const double& nombre, const Donnee& donnee)
{
	return donnee / nombre;
}

/********************************************************************************
* Fonction:		Donnee::operator^
* Description:	permet de mettre un exposant a une donnee
* Paramètres:	- (double)	nombre : l'exposant
				- (Donnee)	donner : la donnee a multiplier
* Retour:		(Donnee) la donnee resultante
********************************************************************************/
Donnee Donnee::operator^(const double& nombre) const
{
	Donnee resultat(nom_, pow(valeur_, nombre), unite_);
	return resultat;
}

/********************************************************************************
* Fonction:		Donnee::operator<<
* Description:	permet l'affichage d'une donnee
* Paramètres:	- (ostream) out : le flux de sortie
				- (donnee)	donnee : la donnee a afficher
* Retour:		(ostream) pour l'appel en cascade
********************************************************************************/
ostream& operator<<(ostream& out, const Donnee& donnee)
{
	out << setfill(' ') << setprecision(2)
		<< setw(20)	<< right << donnee.nom_		<< "// " 
		<< setw(20)	<< fixed << donnee.valeur_	<<  ' '
		<< setw(20)	<< left	 << donnee.unite_	<< endl;
	return out;
}