////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Carburant.cpp
/// \date			02/02/2017 - MAJ 24/02/2017
/// \description	Implementation de la classe Carburant
////////////////////////////////////////////////////////////////////////////////

#include "../include/Carburant.h"

Carburant::Carburant() : 
	poussee_(Donnee("Poussee")), pression_(Donnee("Pression"))
{
}

Donnee Carburant::obtenirPoussee() const
{
	return poussee_;
}

Donnee Carburant::obtenirPression() const
{
	return pression_;
}

void Carburant::mettrePoussee(const Donnee& poussee)
{
	poussee_ = poussee;
}

void Carburant::mettrePression(const Donnee& pression)
{
	pression_ = pression;
}

ostream& operator<<(ostream& out, const Carburant& carburant)
{
	out << "___________________________________________________________" << endl
		<< "Voici les parametres du carburant / " << endl << endl
		<< carburant.obtenirPoussee()	<< endl
		<< carburant.obtenirPression()	<< endl
		<< carburant.obtenirMasse()		<< endl;
	return out;
}