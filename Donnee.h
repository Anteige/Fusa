////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Donnee.h
/// \date			31/01/2017 - MAJ 24/02/2017
/// \description	Definition de la classe Donnee
////////////////////////////////////////////////////////////////////////////////

#ifndef _DONNEE_H_
#define _DONNEE_H_

#include <string>
#include <iomanip>

using namespace std;

class Donnee 
{
public:
	// Constructeur.
	Donnee(string nom = "Donnee sans nom", double valeur = 0.0, 
										   string unite = "unites");

	// Methodes d'acces.
	string	obtenirNom()	const;
	double	obtenirValeur() const;
	string	obtenirUnite()	const;

	// Methodes de modifications.
	void	mettreNom(string nom);
	void	mettreValeur(double valeur);
	void	mettreUnite(string unite);

	// Affichage
	friend ostream& operator<<(ostream& out, const Donnee& donnee);

private:
	// Attributs
	string	nom_;
	double	valeur_;
	string	unite_;
};

#endif // _DONNEE_H_