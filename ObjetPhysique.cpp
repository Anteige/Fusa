#include "ObjetPhysique.h"

ObjetPhysique::ObjetPhysique() : masse_(Donnee())
{
	centreDeMasse_[AXE_X] = Donnee();
	centreDeMasse_[AXE_Y] = Donnee();
	centreDeMasse_[AXE_Z] = Donnee();
}

Donnee ObjetPhysique::obtenirMasse() const
{
	return masse_;
}
