#include "Cadre.h"
#include <iostream>
using namespace std;

int main() {


	CCadre cdr(15, 10, 120, 210, '*');
	cdr.affiche_crt_Cadre();
	int n_srfc = cdr.calcul_srfc();
	cdr.affiche_crt_calculS(n_srfc);
	int n_prmtr = cdr.calcul_prmtr();
	cdr.affiche_crt_calculP(n_prmtr);
	//
	//modifications
	cdr.mdftn_Cadre();
	//affichage après modifications
	cdr.affiche_crt_Cadre();
	/*int n_srfcV2 = cdr.calcul_srfc();
	cdr.affiche_crt_calculS(n_srfcV2);
	int n_prmtrV2 = cdr.calcul_prmtr();
	cdr.affiche_crt_calculP(n_prmtrV2);*/

	//Vérification booléen
	bool rep_IsCarre = cdr.IsCarre(cdr);
	cout << "\n Boolean IsCarre is " << rep_IsCarre << "\n\n\n";
//	cdr.affiche_Bool();

	//Affichage après Constructeur par défaut
	CCadre();
	cdr.affiche_crt_Cadre();

	//Rotation d'angle
//	cdr.rotation();




}