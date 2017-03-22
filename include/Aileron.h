///////////////////////////////////////////////////////////////////////////////
/// \author		Antoine Gaulin
/// \file		Aileron.h
/// \date		02/02/2017
/// \brief		Definition de la classe Aileron
///////////////////////////////////////////////////////////////////////////////

#ifndef _AILERON_H_
#define _AILERON_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Aileron : public ObjetPhysique

{

public:

	///
	/// \brief Constructeur par defaut
	///
	Aileron();
	
	///
	/// \brief	accessor de force_
	/// \return	Donnee	La force de l'aileron
	///
	Donnee obtenirForce() const;
	
	///
	/// \brief	accessor de resistance_
	/// \return	Donnee	La resistance de l'aileron
	///
	Donnee obtenirResistance() const;

	///
	/// \brief	mutator de force_
	/// \param	Donnee	la nouvelle force de l'aileron
	///
	void mettreForce(const Donnee& force);
	
	///
	///\brief	mutator de resistance_
	///\param	Donnee	La nouvelle resistance de l'aileron
	///
	void mettreResistance(const Donnee& resistance);

	///
	/// \brief	Permet l'affichage des parametres de l'Aileron
	/// \param	Aileron	L'aileron a afficher [in/out]
	/// \param	out		Le flux de sortie [in/out]
	/// \return	ostream	Permet l'appel en cascade
	///
	friend ostream& operator<<(ostream& out, const Aileron& aileron);

private:

	Donnee	force_;
	Donnee	resistance_;

};

#endif // _AILERON_H_