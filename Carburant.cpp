#include "Carburant.h"

Carburant::Carburant()
{
}

Donnee Carburant::obtenirMasse() const
{
	return masse_;
}

Donnee Carburant::obtenirPression() const
{
	return pression_
}

Donnee Carburant::obtenirPoussee() const
{
	return poussee_;
}

void Carburant::mettreMasse(Donnee masse)
{
	masse_ = masse
}

void Carburant::mettrePression(Donnee pression)
{
	pression_ = pression;
}

void Carburant::mettrePoussee(Donnee poussee)
{
	poussee_ = poussee;
}
