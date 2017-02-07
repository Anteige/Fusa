////////////////////////////////////////////////////////////////////////////////
/// Fusa
/// \auteur			Antoine Gaulin
/// \fichier		Donnee.h
/// \date			31/01/2017 - MAJ 02/02/2017
/// \description	Definition de la classe Donnee
////////////////////////////////////////////////////////////////////////////////

#ifndef _DONNEE_H_
#define _DONNEE_H_

#include <string>

using namespace std;

class Donnee 
{
public:
	// Constructeur par defaut.
	Donnee();

	// Constructeur par parametres.
	Donnee(string nom, double valeur, string unite);

	// Methodes d'acces.
	string	obtenirNom()	const;
	double	obtenirValeur() const;
	string	obtenirUnite()	const;

	// Methodes de modifications.
	void	mettreNom(string nom);
	void	mettreValeur(double nom);
	void	mettreUnite(string unite);

private:
	// Attributs
	string	nom_;
	double	valeur_;
	string	unite_;
};

#endif // _DONNEE_H_