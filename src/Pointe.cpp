///////////////////////////////////////////////////////////////////////////////
/// \author		Antoine Gaulin
/// \file		Pointe.cpp
/// \date		07/02/2017
/// \brief		Implementation de la classe pointe
////////////////////////////////////////////////////////////////////////////////

#include "Pointe.h"
#include <iomanip>

Pointe::Pointe() : resistance_(Donnee("Resistance"))
{

}

Donnee Pointe::obtenirResistance() const
{
	return resistance_;
}

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
