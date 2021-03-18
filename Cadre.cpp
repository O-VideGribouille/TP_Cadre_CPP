#include "Cadre.h"
#include <math.h>
#include <iostream>
#define PI 3.14
using namespace std;

//int CCadre::n_cpt = 0;

CCadre::CCadre(int n_abs, int n_ord, int largeur, int longueur, char motif) //char motif
{
	this->n_x = n_abs;
	this->n_y = n_ord;
	this->n_lrg_ = largeur;
	this->n_lgr = longueur;
	this->chr_mtf = motif;
	//n_cpt++;
}

void CCadre::affiche_crt_Cadre()
{
	cout << "Coordonees du point X : " << this->n_x << " et Y : " << this->n_y << "\n";
	cout << "Sa largeur est de " << this->n_lrg_ << " et sa longueur est de " << this->n_lgr << "\n";
	cout << "" << "Le motif utilise est " << this->chr_mtf << "\n\n\n";
}

int CCadre::calcul_srfc()
{
	int n_srfc = this->n_lgr * this->n_lrg_;
	return n_srfc;
}


void CCadre::affiche_crt_calculS(int n_srfc)
{
	cout << "Calcul de la surface d'une largeur de " << this->n_lrg_ << " d'une longueur de " << this->n_lgr << " : " << n_srfc << " " << "\n\n";
}


int CCadre::calcul_prmtr()
{
	int n_prmtr = 2 * (this->n_lrg_ + this->n_lgr);
	return n_prmtr;
}

void CCadre::affiche_crt_calculP(int n_prmtr)
{
	cout << "Calcul d'un perimetre d'une largeur de " << this->n_lrg_ << " d'une longueur de " << this->n_lgr << " : " << n_prmtr << " " << "\n\n";
}

void CCadre::mdftn_Cadre()
{
	cout << "\n Entrez de nouvelle coordonees du point : \n X : ";
	int n_abs;
	cin >> n_abs;
	this->n_x = n_abs;

	cout << "\n Y : ";
	int n_ord;
	cin >> n_ord;
	this->n_y = n_ord;

	cout << "\n\n Entrez une nouvelle largeur : ";
	int largeur;
	cin >> largeur;
	this->n_lrg_ = largeur;

	cout << "\n\n Entrez une nouvelle longueur : ";
	int longueur;
	cin >> longueur;
	this->n_lgr = longueur;

	cout << "\n\n Entrez un nouveau motif : ";
	char motifs;
	cin >> motifs;
	this->chr_mtf = motifs;
}

bool CCadre::IsCarre(CCadre) const
{
	if (this->n_lrg_ == this->n_lgr)
		return true;

	else
		return false;

}
/*
void Cadre::affiche_Bool(bool rep_IsCarre)
{
	if (rep_IsCarre == true)
		cout << "\n     Le cadre est un carre.\n";
	else
	{
		cout << "\n     Le cadre est un rectangle.\n";
	}
}
*/

CCadre::CCadre()
{
	this->n_x = 10;
	this->n_y = 5;
	this->n_lrg_ = 5;
	this->n_lgr = (2 * this->n_lrg_);
	this->chr_mtf = '*';
	//n_cpt++;
}

/*
CCadre::~CCadre()
{
	cout << "\n\nDestructeur \n\n\n" <<
		delete[] n_x, n_y, n_lrg_, n_lgr; //chr_myf;

		//n_cpt--;
}*/

int CCadre::abscisse()
{
	return this->n_x;
}

int CCadre::ordonnee()
{
	return this->n_y;
}

void CCadre::rotation(int flt_angle)
{
	this->n_x = n_x * cos(flt_angle * (PI / 180)) - n_y * sin(flt_angle * (PI / 180));
	this->n_y = n_x * sin(flt_angle * (PI / 180)) + n_y * cos(flt_angle * (PI / 180));
	cout << "\n" << n_x << " " << n_y;
}

/*float CCadre::theta()
{
	return atan(n_y / n_x);
}*/
/*
void CCadre::afficheRtt()
{
	cout << "\n" << n_x << " " << n_y;
}*/
