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
*******************************************************************************/
Aileron::Aileron()
{
}

/*******************************************************************************
* Fonction:		Aileron::obtenirForce
* Description:	accessor de force_
* Param�tres:	aucun
* Retour:		(Donnee) la force de l'aileron
*******************************************************************************/
Donnee Aileron::obtenirForce() const
{
	return force_;
}

Donnee Aileron::obtenirAire() const
{
	return aire_;
}


/*******************************************************************************
* Fonction:		Aileron::obtenirResistance
* Description:	accessor de resistance_
* Param�tres:	aucun
* Retour:		(Donnee) la resistance de l'aileron
*******************************************************************************/
Donnee Aileron::obtenirResistance() const
{
	return resistance_;
}

/*******************************************************************************
* Fonction:		Aileron::mettreForce
* Description:	mutator de force_
* Param�tres:	- (Donnee) force :			a modifier (IN)
* Retour:		aucun
*******************************************************************************/
void Aileron::mettreForce(const Donnee& force)
{
	force_ = force;
}

void Aileron::mettreAire(const Donnee& aire)
{
	aire_ = aire;
}

/*******************************************************************************
* Fonction:		mettreResistance
* Description:	mutator de resistance_
* Param�tres:	- (Donnee) resistance :		a modifier (IN)
* Retour:		aucun
*******************************************************************************/
void Aileron::mettreResistance(const Donnee& resistance)
{
	resistance_ = resistance;
}

ostream & operator<<(ostream & out, const Aileron & aileron)
{
	out << setfill(' ')
		<< "___________________________________________________________" << endl
		<< "Voici les parametres d'un aileron " << "en forme de "
		<< aileron.obtenirForme() << ' ' << "/ " << endl << endl
		<< aileron.obtenirForce() << endl
		<< aileron.obtenirResistance() << endl
		<< aileron.obtenirAire() << endl
		<< aileron.obtenirCentreDeMasseEnX()
		<< aileron.obtenirCentreDeMasseEnY()
		<< aileron.obtenirCentreDeMasseEnZ() << endl;
}
