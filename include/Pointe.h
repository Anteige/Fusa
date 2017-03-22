///////////////////////////////////////////////////////////////////////////////
/// \author		Antoine Gaulin
/// \file		Pointe.h
/// \date		07/02/2017
/// \brief		Definition de la classe pointe
////////////////////////////////////////////////////////////////////////////////

#ifndef _POINTE_H_
#define _POINTE_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Pointe : public ObjetPhysique
{
public:

	///
	///\brief Constructeur par default
	///
	Pointe();

	///
	///\brief accessor de resistance_
	///\return	Donnee		La resistance de la pointe.
	///
	Donnee obtenirResistance() const;

	///
	///\brief mutator de resistance_
	///\return	resistance	La nouvelle valeur de la resistance de la pointe.
	///
	void mettreResistance(Donnee resistance);

	///
	/// \brief	Permet l'affichage des parametres de la pointe
	/// \param	Carburant	la pointe a afficher [in/out]
	/// \param	out			Le flux de sortie [in/out]
	/// \return	ostream		Permet l'appel en cascade
	///
	friend ostream& operator<<(ostream& out, const Pointe& pointe);

private:

	Donnee	resistance_;
	
};

#endif // _POINTE_H_