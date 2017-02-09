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
* Paramètres:	aucun
* Retour:		aucun
*******************************************************************************/
Aileron::Aileron()
{
}

/*******************************************************************************
* Fonction:		Aileron::obtenirForce
* Description:	accessor de force_
* Paramètres:	aucun
* Retour:		(Donnee) la force de l'aileron
*******************************************************************************/
Donnee Aileron::obtenirForce() const
{
	return force_;
}

/*******************************************************************************
* Fonction:		Aileron::obtenirResistance
* Description:	accessor de resistance_
* Paramètres:	aucun
* Retour:		(Donnee) la resistance de l'aileron
*******************************************************************************/
Donnee Aileron::obtenirResistance() const
{
	return resistance_;
}

/*******************************************************************************
* Fonction:		Aileron::mettreForce
* Description:	mutator de force_
* Paramètres:	- (Donnee) force :			a modifier (IN)
* Retour:		aucun
*******************************************************************************/
void Aileron::mettreForce(const Donnee& force)
{
	force_ = force;
}

/*******************************************************************************
* Fonction:		mettreResistance
* Description:	mutator de resistance_
* Paramètres:	- (Donnee) resistance :		a modifier (IN)
* Retour:		aucun
*******************************************************************************/
void Aileron::mettreResistance(const Donnee& resistance)
{
	resistance_ = resistance;
}