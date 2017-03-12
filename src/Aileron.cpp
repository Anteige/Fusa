////////////////////////////////////////////////////////////////////////////////
/// \auteur			Antoine Gaulin
/// \fichier		Aileron.cpp
/// \date			02/02/2017
/// \description	Implementation de la classe Aileron
///////////////////////////////////////////////////////////////////////////////

#include "Aileron.h"

Aileron::Aileron() : force_(Donnee("Force")), resistance_(Donnee("Resistance"))
{
}

Donnee Aileron::obtenirForce() const
{
	return force_;
}

Donnee Aileron::obtenirResistance() const
{
	return resistance_;
}

void Aileron::mettreForce(const Donnee& force)
{
	force_ = force;
}

void Aileron::mettreResistance(const Donnee& resistance)
{
	resistance_ = resistance;
}

ostream & operator<<(ostream & out, const Aileron & aileron)
{
	out << setfill(' ')
		<< "___________________________________________________________" << endl
		<< "Voici les parametres d'un aileron " << "en forme de "
		<< aileron.obtenirForme() << ' ' << "/ " << endl << endl
		<< aileron.obtenirForce() << endl
		<< aileron.obtenirResistance() << endl
		<< aileron.obtenirAire() << endl
		<< aileron.obtenirCentreDeMasseEnX()
		<< aileron.obtenirCentreDeMasseEnY()
		<< aileron.obtenirCentreDeMasseEnZ() << endl;
	return out;
}
