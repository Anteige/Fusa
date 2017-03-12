///////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Carburant.h
/// \date			02/02/2017 - MAJ 24/02/2017
/// \description	Definition de la classe Carburant
///////////////////////////////////////////////////////////////////////////////

#ifndef _CARBURANT_H_
#define _CARBURANT_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Carburant : public ObjetPhysique
{
public:

	///
	///\brief 	Constructeur par defaut
	///
	Carburant();

	///
	///\brief  	accessor de poussee_
	///\return 	Donnee 	La poussee du carburant
	///
	Donnee	obtenirPoussee()	const;
	
	///
	///\brief 	accessor de pression_
	///\return 	Donnee 	La pression du carburant
	///
	Donnee	obtenirPression()	const;

	///
	///\brief 	mutator de poussee_
	///\param 	Donnee 	poussee                                            [in]
	///
	void	mettrePoussee(const Donnee& poussee);
	
	///
	///\brief 	mutator de pression_
	///\param 	Donnee 	pression                                           [in]
	///
	void	mettrePression(const Donnee& pression);

	///
	///\brief 	Permet l'affichage des parametres du carburant
	///\param 	ostream 	out : le flux de sortie
	///\param 	Carburant 	carburant : le carburant a afficher
	///\return 	ostream 	Pour l'appel en cascade
	///
	friend ostream& operator<<(ostream& out, const Carburant& carburant);

private:
	// Attributs
	Donnee	poussee_;
	Donnee	pression_;
};

#endif // _CARBURANT_H_