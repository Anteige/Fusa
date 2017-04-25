///////////////////////////////////////////////////////////////////////////////
/// \author		Antoine Gaulin
/// \file		Trajectoire.cpp
/// \date		07/02/2017
/// \brief		Implementation de la classe Trajectoire
///////////////////////////////////////////////////////////////////////////////


#include "../include/Trajectoire.h"


Trajectoire::Trajectoire()
{
	altitudeMax_ = Donnee( "Altitude Maximale" );
	distance_ = Donnee( "Distance" );
	temps_ = Donnee( "Temps" );
}


Donnee 
Trajectoire::obtenirAltitudeMax() const
{
	return altitudeMax_;
}


Donnee 
Trajectoire::obtenirDistance() const
{
	return distance_;
}


Donnee 
Trajectoire::obtenirTemps() const
{
	return temps_;
}


void 
Trajectoire::mettreAltitudeMax(Donnee altitudeMax)
{
	altitudeMax_ = altitudeMax;
}


void 
Trajectoire::mettreDistance(Donnee distance)
{
	distance_ = distance;
}


void 
Trajectoire::mettreTemps(Donnee temps)
{
	temps_ = temps;
}


ostream& 
operator<<(ostream& out, const Trajectoire& trajectoire)
{
	out << "___________________________________________________________" 
		<< endl
		<< "Voici les parametres de la trajectoire parabolique /" 
		<< endl 		<< endl
		<< altitudeMax_ << endl
		<< distance_ 	<< endl
		<< temps_		<< endl;
	return out;
}