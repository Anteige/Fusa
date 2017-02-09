#include "Forme.h"

Forme::Forme()
{
}

Donnee Forme::obtenirAire()
{
	return aire_;
}

string Forme::obtenirFigure() const
{
	return figure_;
}