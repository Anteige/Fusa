///////////////////////////////////////////////////////////////////////////////
/// \author		Antoine Gaulin
/// \file		Cylindre.h
/// \date		02/02/2017
/// \brief		Definition de la classe Cylindre
////////////////////////////////////////////////////////////////////////////////

#ifndef _CYLINDRE_H_
#define _CYLINDRE_H_

#include "ObjetPhysique.h"
#include "Donnee.h"

using namespace std;

class Cylindre : public ObjetPhysique
{
public:

	///
	///\brief	Constructeur par defaut
	///
	Cylindre();

	///
	///\brief 	accessor de pressionMaximale_
	///\return 	Donnee 	La pression maximale du cylindre
	///
	Donnee obtenirPressionMaximale()	const;

	///
	///\brief 	mutator de pressionMaximale_
	///\param 	Donnee 	La nouvelle pression maximale du carburant		   [in]
	///
	void mettrePressionMaximale(Donnee pressionMaximale);

	///
	/// \brief	Permet l'affichage du Cylindre
	/// \param	Cylindre	le cylindre a afficher					   [in/out]
	/// \param	out			Le flux de sortie						   [in/out]
	/// \return	ostream		Permet l'appel en cascade
	///
	friend ostream& operator<<(ostream& out, const Cylindre& cylindre);

private:
	// Attributs
	Donnee	pressionMaximale_;
};

#endif // _Cylindre_H_