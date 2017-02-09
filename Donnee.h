////////////////////////////////////////////////////////////////////////////////
/// Fusa			version 1
/// \auteur			Antoine Gaulin
/// \fichier		Donnee.h
/// \date			31/01/2017 - MAJ 09/02/2017
/// \description	Definition de la classe Donnee
////////////////////////////////////////////////////////////////////////////////

#ifndef _DONNEE_H_
#define _DONNEE_H_

#include <string>

using namespace std;

const unsigned LONGUEUR_MOT_MAX = 20;

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
	void	mettreValeur(double valeur);
	void	mettreUnite(string unite);

	// Affichage
	friend ostream& operator<<(ostream& out, const Donnee& donnee);

private:
	// Attributs
	char	nom_[LONGUEUR_MOT_MAX];
	double	valeur_;
	char	unite_[LONGUEUR_MOT_MAX];
};

#endif // _DONNEE_H_