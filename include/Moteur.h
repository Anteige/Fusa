///////////////////////////////////////////////////////////////////////////////
/// \author		Antoine Gaulin
/// \file		Moteur.h
/// \date		02/02/2017
/// \brief		Definition de la classe Moteur
////////////////////////////////////////////////////////////////////////////////

#ifndef _MOTEUR_H_
#define _MOTEUR_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Moteur : public ObjetPhysique
{
public:

	///
	///\brief	Constructeur par defaut
	///
	Moteur();

	///
	///\brief 	accessor de poussee_
	///\return	Donnee	Pousse du moteur
	///
	Donnee obtenirPoussee() const;

	///
	///\brief 	mutator de poussee_
	///\return	poussee	La nouvelle pousse du moteur
	///
	void	mettrePoussee(Donnee poussee);

	///
	/// \brief	Permet l'affichage du moteur
	/// \param	Moteur		le moteur a afficher					   [in/out]
	/// \param	out			Le flux de sortie						   [in/out]
	/// \return	ostream		Permet l'appel en cascade
	///
	friend ostream& operator<<(ostream& out, const Moteur& moteur);

private:
	
	Donnee	poussee_;

};

#endif // _MOTEUR_H_