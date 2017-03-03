////////////////////////////////////////////////////////////////////////////////
/// \author		Antoine Gaulin
/// \file		ObjetPhysique.h
/// \date		07/02/2017 - MAJ 28/02/2017
/// \brief		Definition de la classe ObjetPhysique
////////////////////////////////////////////////////////////////////////////////

#ifndef _OBJETPHYSIQUE_H_
#define _OBJETPHYSIQUE_H_

#include "Donnee.h"

using namespace std;

enum Axes { X, Y, Z, N_AXES };

class ObjetPhysique
{

public:

////////////////////////////////////////////////////////////////////////////////
/// \brief	Constructeur par defaut
/// \param	nom		Le nom de la donnee				[in]
/// \param	valeur	La valeur de la donnee			[in]
/// \param	unite 	L'unite de la donnee			[in]
////////////////////////////////////////////////////////////////////////////////
	ObjetPhysique();

////////////////////////////////////////////////////////////////////////////////
/// \brief	Accessor de forme_
/// \return	double	La forme de l'objet
////////////////////////////////////////////////////////////////////////////////
	string	obtenirForme() const;

////////////////////////////////////////////////////////////////////////////////
/// \brief	Accessor de aire_
/// \return	double	L'aire de l'objet
////////////////////////////////////////////////////////////////////////////////
	Donnee	obtenirAire() const;

////////////////////////////////////////////////////////////////////////////////
/// \brief	Accessor de volume_
/// \return	double	Le volume de l'objet
////////////////////////////////////////////////////////////////////////////////
	Donnee	obtenirVolume() const;

////////////////////////////////////////////////////////////////////////////////
/// \brief	Accessor de masse_
/// \return	double	La masse de l'objet
////////////////////////////////////////////////////////////////////////////////
	Donnee	obtenirMasse() const;

	Donnee	obtenirCentreDeMasseEnX()	const;
	Donnee	obtenirCentreDeMasseEnY()	const;
	Donnee	obtenirCentreDeMasseEnZ()	const;

	Donnee	obtenirTemperature()		const;


	// Methodes de modifications.
	void	mettreForme(string forme);
	void	mettreAire(const Donnee& aire);
	void	mettreVolume(const Donnee& volume);
	void	mettreMasse(const Donnee& masse);
	void	mettreCentreDeMasse(const Donnee& pointX, 
								const Donnee& pointY, 
								const Donnee& pointZ);
	void	mettreTemperature(const Donnee& temperature);


private:
	// Attributs
	string	forme_;
	Donnee	aire_;
	Donnee	volume_;
	Donnee	masse_;
	Donnee	centreDeMasse_[N_AXES];
	Donnee	temperature_;
};

#endif // _OBJETPHYSIQUE_H_