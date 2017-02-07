#include "Trajectoire.h"

Trajectoire::Trajectoire()
{
}

Donnee Trajectoire::obtenirDistance() const
{
	return distance_;
}

Donnee Trajectoire::obtenirTemps() const
{
	return temps_;
}

Donnee Trajectoire::obtenirAltitudeMax() const
{
	return altitudeMax_;
}

void Trajectoire::mettreDistance(Donnee distance)
{
	distance_ = distance;
}

void Trajectoire::mettreTemps(Donnee temps)
{
	temps_ = temps;
}

void Trajectoire::mettreAltitudeMax(Donnee altitudeMax)
{
	altitudeMax_ = altitudeMax;
}
