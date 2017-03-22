///////////////////////////////////////////////////////////////////////////////
/// \author		Antoine Gaulin
/// \file		Trajectoire.h
/// \date		07/02/2017
/// \brief		Definition de la classe Trajectoire
///////////////////////////////////////////////////////////////////////////////

#ifndef _TRAJECTOIRE_H_
#define _TRAJECTOIRE_H_

#include "Donnee.h"

using namespace std;

class Trajectoire
{

public:
	
	///
	///\brief Constructeur par default
	///
	Trajectoire();

	///
	///\brief Accessor de altitudeMax_
	///\return	Donnee		L'altitude maximale de la trajectoire
	///
	Donnee obtenirAltitudeMax() const;

	///
	///\brief Accessor de distance_
	///\return	Donnee		La distance parcourue par la trajectoire
	///
	Donnee obtenirDistance() const;

	///
	///\brief Accessor de temps_
	///\return	Donnee		Le temps requis par la trajectoire
	///
	Donnee obtenirTemps() const;

	///
	///\brief Mutator de altitudeMax_
	///\return	altitudeMax	la nouvelle altitude maximale de la trajectoire
	///
	void mettreAltitudeMax(Donnee altitudeMax);

	///
	///\brief Mutator de distance_
	///\return	distance	la nouvelle distance de la trajectoire
	///
	void mettreDistance(Donnee distance);

	///
	///\brief Mutator de temps_
	///\return	temps		le nouveau temps de la trajectoire
	///
	void mettreTemps(Donnee temps);

	///
	/// \brief	Permet l'affichage des parametres de la trajectoire
	/// \param	Trajectoire	L'aileron a afficher [in/out]
	/// \param	out			Le flux de sortie [in/out]
	/// \return	ostream&	Permet l'appel en cascade
	///
	friend ostream& operator<<(ostream& out, const Trajectoire& trajectoire);

private:

	Donnee	altitudeMax_;
	Donnee	distance_;
	Donnee	temps_;

};

#endif // _TRAJECTOIRE_H_