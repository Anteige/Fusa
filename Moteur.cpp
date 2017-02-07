#include "Moteur.h"

Moteur::Moteur()
{
}

Donnee Moteur::obtenirMasse() const
{
	return masse_;
}

Donnee Moteur::obtenirPoussee() const
{
	return poussee_;
}

Donnee Moteur::obtenirTemperature() const
{
	return temperature_;
}

string Moteur::obtenirForme() const
{
	return forme_;
}

void Moteur::mettreMasse(Donnee masse)
{
	masse_ = masse;
}

void Moteur::mettrePoussee(Donnee poussee)
{
	poussee_ = poussee;
}

void Moteur::mettreTemperature(Donnee temperature)
{
	temperature_ = temperature;
}

void Moteur::mettreForme(string forme)
{
	forme_ = forme;
}
