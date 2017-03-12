////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Aileron.h
/// \date			02/02/2017 - MAJ 24/02/2017
/// \description	Definition de la classe Aileron
////////////////////////////////////////////////////////////////////////////////

#ifndef _AILERON_H_
#define _AILERON_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Aileron : public ObjetPhysique
{
public:
	///
	///\brief 		Constructeur par defaut
	///
	Aileron();

	
	///
	///\brief		accessor de force_
	///\return		Donnee	 La force de l'aileron
	///
	Donnee	obtenirForce()		const;
	
	///
	///\brief		accessor de resistance_
	///\return		Donnee	 La resistance de l'aileron
	///
	Donnee	obtenirResistance()	const;

	///
	///\brief		mutator de force_
	///\param		- Donnee	 force :			a modifier (IN)
	///
	void	mettreForce(const Donnee& force);
	
	///
	///\brief		mutator de resistance_
	///\param		- Donnee 	resistance :		a modifier (IN)
	///
	void	mettreResistance(const Donnee& resistance);

	// Affichage
	friend ostream& operator<<(ostream& out, const Aileron& aileron);

private:
	// Attributs
	Donnee	force_;
	Donnee	resistance_;
};

#endif // _AILERON_H_