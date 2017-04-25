///////////////////////////////////////////////////////////////////////////////
/// \author		Antoine Gaulin
/// \file		Fusee.cpp
/// \date		07/02/2017
/// \brief		Implementation de la classe Fusee.
////////////////////////////////////////////////////////////////////////////////


#include "../include/Fusee.h"


Fusee::Fusee()
{
}


Aileron 
Fusee::obtenirAileron() const
{
	return aileron_;
}


Carburant 
Fusee::obtenirCarburant() const
{
	return carburant_;
}


Pointe 
Fusee::obtenirPointe() const
{
	return Pointe_;
}


Cylindre 
Fusee::obtenirCylindre() const
{
	return cylindre_;
}


Moteur 
Fusee::obtenirMoteur() const
{
	return moteur_;
}


Trajectoire 
Fusee::obtenirTrajectoire() const
{
	return trajectoire_;
}


void 
Fusee::mettreAileron(const Aileron& aileron)
{
	aileron_ = aileron;
}


void 
Fusee::mettreCarburant(const Carburant& carburant)
{
	carburant_ = carburant;
}


void 
Fusee::mettrePointe(const Pointe& Pointe)
{
	Pointe_ = Pointe;
}


void 
Fusee::mettreCylindre(const Cylindre& cylindre)
{
	cylindre_ = cylindre;
}


void 
Fusee::mettreMoteur(const Moteur& moteur)
{
	moteur_ = moteur;
}


void 
Fusee::mettreTrajectoire(const Trajectoire& trajectoire)
{
	trajectoire_ = trajectoire;
}


ostream& 
operator<<(ostream & out, const Fusee& fusee)
{
	out << "___________________________________________________________" << endl
		<< "Voici les parametres de la fusee /" << endl << endl
		<< fusee.obtenirMasse() << endl
		<< fusee.obtenirCentreDeMasseEnX()
		<< fusee.obtenirCentreDeMasseEnY()
		<< fusee.obtenirCentreDeMasseEnZ() << endl;
	return out;
}