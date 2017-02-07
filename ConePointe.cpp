#include "ConePointe.h"

ConePointe::ConePointe()
{
}

Donnee ConePointe::obtenirMasse() const
{
	return masse_;
}

Donnee ConePointe::obtenirResistance() const
{
	return resistance_;
}

string ConePointe::obtenirForme() const
{
	return forme_;
}

void ConePointe::mettreMasse(Donnee masse)
{
	masse_ = masse;
}

void ConePointe::mettreResistance(Donnee resistance)
{
	resistance_ = resistance;
}

void ConePointe::mettreForme(string forme)
{
	forme_ = forme;
}
