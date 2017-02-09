#include "Cercle.h"

Cercle::Cercle()
{
}

void Cercle::calculerAire()
{
	aire_ = Donnee("Aire//",rayon_.obtenirValeur() * 2 * PI, "unites");
}


void Cercle::mettreRayon(Donnee rayon)
{
	rayon_ = rayon;
	calculerAire();
}
