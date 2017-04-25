////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Cylindre.cpp
/// \date			02/02/2017 - MAJ 24/02/2017
/// \description	Implementation de la classe Cylindre
////////////////////////////////////////////////////////////////////////////////


#include "../include/Cylindre.h"


Cylindre::Cylindre()
{
	pressionMaximale_ = Donnee( "Pression Maximale" );
}


Donnee 
Cylindre::obtenirPressionMaximale() const
{
	return pressionMaximale_;
}


void 
Cylindre::mettrePressionMaximale(Donnee pressionMaximale)
{
	pressionMaximale_ = pressionMaximale;
}


ostream&
operator<<(ostream& out, const Cylindre & cylindre)
{
	out << "___________________________________________________________" << endl
		<< "Voici les parametres du cylindre /" << endl << endl
		<< cylindre.obtenirPressionMaximale() << endl
		<< cylindre.obtenirVolume() << endl
		<< cylindre.obtenirMasse() << endl;
	return out;
}
