////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Pointe.cpp
/// \date			07/02/2017
/// \description	Initialisation de la classe Pointe
////////////////////////////////////////////////////////////////////////////////

#include "Pointe.h"
#include <iomanip>

/*******************************************************************************
* Fonction:		Pointe::Pointe
* Description:	Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
********************************************************************************/
Pointe::Pointe() : resistance_(Donnee("Resistance"))
{
}

/*******************************************************************************
* Fonction:		Pointe::obtenirResistance
* Description:	accessor de resistance_
* Paramètres:	aucun
* Retour:		(Donnee) la resistance du Cone a la pointe
********************************************************************************/
Donnee Pointe::obtenirResistance() const
{
	return resistance_;
}

/*******************************************************************************
* Fonction:		Cylindre::mettreResistance
* Description:	mutator de resistance_
* Paramètres:	- (Donnee) resistance :					a modifier (IN)
* Retour:		aucun
********************************************************************************/
void Pointe::mettreResistance(Donnee resistance)
{
	resistance_ = resistance;
}

ostream & operator<<(ostream & out, const Pointe & pointe)
{
	out << setfill(' ')
		<< "___________________________________________________________" << endl
		<< "Voici les parametres de la pointe " << "en forme de "
		<< pointe.obtenirForme() << ' ' << "/ " << endl << endl
		<< pointe.obtenirResistance() << endl
		<< pointe.obtenirMasse() << endl
		<< pointe.obtenirCentreDeMasseEnX()
		<< pointe.obtenirCentreDeMasseEnY()
		<< pointe.obtenirCentreDeMasseEnZ() << endl;
	return out;
}
