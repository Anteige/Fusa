#include "Forme.h"

Forme::Forme()
{
}

Donnee Forme::obtenirAire()
{
	return aire_;
}

string Forme::obtenirForme() const
{
	return forme_;
}
