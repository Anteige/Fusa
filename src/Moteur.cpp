///////////////////////////////////////////////////////////////////////////////
/// \author		Antoine Gaulin
/// \file		Moteur.cpp
/// \date		07/02/2017
/// \brief		Implementation de la classe Moteur
////////////////////////////////////////////////////////////////////////////////


#include "../include/Moteur.h"


Moteur::Moteur()
{
	poussee_ = Donnee( "Poussee" );
}


Donnee 
Moteur::obtenirPoussee() const
{
	return poussee_;
}


void 
Moteur::mettrePoussee(Donnee poussee)
{
	poussee_ = poussee;
}


ostream& 
operator<<(ostream & out, const Moteur & moteur)
{
	out << setfill(' ')
		<< "___________________________________________________________" << endl
		<< "Voici les parametres du moteur " << "en forme de "
		<< moteur.obtenirForme() << ' ' << "/ " << endl << endl
		<< moteur.obtenirMasse() << endl
		<< moteur.obtenirPoussee() << endl
		<< moteur.obtenirTemperature() << endl
		<< moteur.obtenirCentreDeMasseEnX()
		<< moteur.obtenirCentreDeMasseEnY()
		<< moteur.obtenirCentreDeMasseEnZ() << endl;
	return out;
}
