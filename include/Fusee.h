///////////////////////////////////////////////////////////////////////////////
/// \author		Antoine Gaulin
/// \file		Fusee.h
/// \date		02/02/2017
/// \brief		Definition de la classe Fusee
////////////////////////////////////////////////////////////////////////////////

#ifndef _FUSEE_H_
#define _FUSEE_H_

#include "Aileron.h"
#include "Carburant.h"
#include "Pointe.h"
#include "Cylindre.h"
#include "Moteur.h"
#include "Trajectoire.h"

using namespace std;

class Fusee : public ObjetPhysique
{
public:

	///
	///\brief	Constructeur par defaut
	///
	Fusee();

	///
	///\brief 	accessor de aileron_
	///\return 	Aileron 	L'aileron de la fusee
	///
	Aileron	obtenirAileron() const;

	///
	///\brief 	accessor de carburant_
	///\return 	Carburant 	Le carburant de la fusee
	///
	Carburant obtenirCarburant() const;

	///
	///\brief 	accessor de pointe_
	///\return 	Pointe 		La pointe de la fusee
	///
	Pointe obtenirPointe() const;

	///
	///\brief 	accessor de cylindre_
	///\return 	Cylindre 	Le cylindre de la fusee
	///
	Cylindre obtenirCylindre() const;

	///
	///\brief 	accessor de moteur_
	///\return 	Moteur 		Le moteur de la fusee
	///
	Moteur obtenirMoteur() const;

	///
	///\brief 	accessor de trajectoire_
	///\return 	Trajectoire La trajectoire de la fusee
	///
	Trajectoire obtenirTrajectoire() const;

	///
	///\brief 	mutator de aileron_
	///\param 	aileron		La nouvelle aileron de la fusee.
	///
	void mettreAileron(const Aileron& aileron);

	///
	///\brief 	mutator de carburant_
	///\param 	carburant	Le nouveau carburant de la fusee.
	///
	void mettreCarburant(const Carburant& carburant);

	///
	///\brief 	mutator de pointe_
	///\param	pointe		La nouvelle pointe de la fusee.
	///
	void mettrePointe(const Pointe& pointe);

	///
	///\brief 	mutator de cylindre_
	///\param	cylindre	Le nouveau cylindre de la fusee.
	///
	void mettreCylindre(const Cylindre& cylindre);

	///
	///\brief 	mutator de moteur_
	///\param	moteur		Le nouveau moteur de la fusee.
	///
	void mettreMoteur(const Moteur& moteur);

	///
	///\brief 	mutator de trajectoire_
	///\param	trajectoire	La nouvelle trajectoire de la fusee.
	///
	void mettreTrajectoire(const Trajectoire& trajectoire);

	///
	/// \brief	Permet l'affichage de la fusee
	/// \param	Fusee		le fusee a afficher						   [in/out]
	/// \param	out			Le flux de sortie						   [in/out]
	/// \return	ostream		Permet l'appel en cascade
	///
	friend ostream & operator<<(ostream & out, const Fusee& fusee);

private:

	Aileron			aileron_;
	Carburant		carburant_;
	Pointe			Pointe_;
	Cylindre		cylindre_;
	Moteur			moteur_;
	Trajectoire		trajectoire_;
};

#endif // _FUSEE_H_