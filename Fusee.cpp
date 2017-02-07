#include "Fusee.h"

Fusee::Fusee()
{
}

Aileron Fusee::obtenirAileron() const
{
	return aileron_;
}

Carburant Fusee::obtenirCarburant() const
{
	return carburant_;
}

ConePointe Fusee::obtenirConePointe() const
{
	return conePointe_;
}

Cylindre Fusee::obtenirCylindre() const
{
	return cylindre_;
}

Moteur Fusee::obtenirMoteur() const
{
	return moteur_;
}

ConePointe Fusee::obtenirTrajectoire() const
{
	return trajectoire_;
}

void Fusee::mettreAileron(Aileron aileron)
{
	aileron_ = aileron;
}

void Fusee::mettreCarburant(Carburant carburant)
{
	carburant_ = carburant;
}

void Fusee::mettreCylindre(Cylindre cylindre)
{
	cylindre_ = cylindre;
}

void Fusee::mettreConePointe(ConePointe conePointe)
{
	conePointe_ = conePointe;
}

void Fusee::mettreMoteur(Moteur moteur)
{
	moteur_ = moteur;
}

void Fusee::mettreTrajectoire(Trajectoire trajectoire)
{
	trajectoire_ = trajectoire;
}
