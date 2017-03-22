///////////////////////////////////////////////////////////////////////////////
/// \author		Antoine Gaulin
/// \file		Carburant.h
/// \date		02/02/2017
/// \brief		Definition de la classe Carburant
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
	///\brief	Constructeur par defaut
	///
	Carburant();

	///
	///\brief  	accessor de poussee_
	///\return 	Donnee	La poussee du carburant
	///
	Donnee obtenirPoussee() const;
	
	///
	///\brief 	accessor de pression_
	///\return 	Donnee 	La pression du carburant
	///
	Donnee obtenirPression() const;

	///
	///\brief 	mutator de poussee_
	///\param 	Donnee 	La nouvelle poussee du carburant
	///
	void mettrePoussee(const Donnee& poussee);

	///
	///\brief 	mutator de pression_
	///\param 	Donnee 	La nouvelle pression du carburant
	///
	void mettrePression(const Donnee& pression);

	///
	/// \brief	Permet l'affichage du carburant
	/// \param	Carburant	le carburant a afficher [in/out]
	/// \param	out			Le flux de sortie [in/out]
	/// \return	ostream		Permet l'appel en cascade
	///
	friend ostream& operator<<(ostream& out, const Carburant& carburant);

private:

	Donnee	poussee_;
	Donnee	pression_;

};

#endif // _CARBURANT_H_