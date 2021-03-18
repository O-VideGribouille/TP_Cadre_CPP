#pragma once
#include <stdio.h>

/*
1. QUESTIONS DE COURS :

1.1 Le r�le d'un constructeur est est d'initialiser les variables.
Il est ex�cut� � la cr�ation d'un objet.

1.2 Le r�le d'un destructeur est de "d�truire" les objets.
Il est ex�cut� apr�s le constructeur.
Il est indispensable pour nettoyer un ensemble d'objets.

1.3 On rep�te un constructeur d'une classe par son nombre et/ou type d'argument.
Il peut y en avoir plusieurs afin d'initialiser un m�me objet, mais de mani�re diff�rente.

1.4 La surd�finition d'une fonction est le fait d'appeler plusieurs fonction par le m�me nom, mais avec un des argument diff�rents.

1.5 la d�finition de public est que toutes les instances de la classe ext�rieur de la classe y auront acc�s.
La d�finition de private est que tout ce qu'il y a d'�crit apr�s devient innaccessible.
Seul la classe ou les m�thodes de la classe y auront acc�s.
*/

// 2. CLASSE CADRE

class CCadre {
private:

	int n_x;
	int n_y;
	int n_lrg_;
	int n_lgr;
	char chr_mtf;

//	static int n_cpt;

public:
	CCadre(int, int, int, int, char); //char
	//Afficher les caract�ristiques du Cadre ;
	void affiche_crt_Cadre();

	// Calculer la surface du Cadre ;
	int calcul_srfc(); // note personnelle / rappel : pas de void, car il faut r�cuper le r�sultat;
	void affiche_crt_calculS(int n_srfc);

	// Calculer le p�rim�tre du Cadre ;
	int calcul_prmtr();
	void affiche_crt_calculP(int n_prmtr);


	//Pouvoir modifier : la longueur - la largeur - le motif du trac� ;
	void mdftn_Cadre();
	//Pouvoir r�cup�rer : la longueur - la largeur - le motif du trac� ;



	// Tester si le cadre est de forme rectangulaire ou carr� via la m�thode : booleen IsCarre() qui retourne true->carr�e/false->rectangle ;
	bool IsCarre(CCadre) const;
//	void affiche_Bool(bool rep_IsCarre);

	//Rajouter un constructeur avec les param�tre par d�faut : x = 10 _ y = 5 _ largeur = 5 _ longueur = 2*largeur _ '*' ;
	CCadre(); //char chr_mtf


	//Un destructeur ;
//	~CCadre();


	//2.2 Ajouter une fonction de rotation, pour op�rer une rotation d'angle Theta � partir du point d'ancrage.
	int abscisse();
	int ordonnee();
	void rotation(int);
//	float theta();

	//2.3 Ajouter la donn�e membre ptrCharNom_Cadre de type char*

};
