////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Aileron.cpp
/// \date			02/02/2017 - MAJ 09/02/2017
/// \description	Implementation de la classe Aileron
////////////////////////////////////////////////////////////////////////////////

#include "Aileron.h"

/*******************************************************************************
* Fonction:		Aileron::Aileron
* Description:	Constructeur par defaut
* Param�tres:	aucun
* Retour:		aucun
********************************************************************************/
Aileron::Aileron()
{
}

/*******************************************************************************
* Fonction:		Aileron::obtenirForce
* Description:	accessor de force_
* Param�tres:	aucun
* Retour:		(Donnee) la force de l'aileron
********************************************************************************/
Donnee Aileron::obtenirForce() const
{
	return force_;
}

/*******************************************************************************
* Fonction:		Aileron::obtenirForme
* Description:	accessor de forme_
* Param�tres:	aucun
* Retour:		(string) la forme de l'aileron
********************************************************************************/
 string Aileron::obtenirForme() const
{
	return forme_;
}

/*******************************************************************************
* Fonction:		Aileron::obtenirResistance
* Description:	accessor de resistance_
* Param�tres:	aucun
* Retour:		(Donnee) la resistance de l'aileron
********************************************************************************/
Donnee Aileron::obtenirResistance() const
{
	return resistance_;
}

/*******************************************************************************
* Fonction:		Aileron::mettreForce
* Description:	mutator de force_
* Param�tres:	- (Donnee) force :			a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Aileron::mettreForce(Donnee force)
{
	force_ = force;
}

/*******************************************************************************
* Fonction:		Aileron::mettreForme
* Description:	mutator de forme_
* Param�tres:	- (Forme*) ptr de forme :	pointe vers la forme a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Aileron::mettreForme(string forme)
{
	strcpy_s(forme_, forme.c_str());
}

/*******************************************************************************
* Fonction:		mettreResistance
* Description:	mutator de resistance_
* Param�tres:	- (Donnee) resistance :		a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Aileron::mettreResistance(Donnee resistance)
{
	resistance_ = resistance;
}