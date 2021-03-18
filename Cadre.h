#pragma once
#include <stdio.h>

/*
1. QUESTIONS DE COURS :

1.1 Le rôle d'un constructeur est est d'initialiser les variables.
Il est exécuté à la création d'un objet.

1.2 Le rôle d'un destructeur est de "détruire" les objets.
Il est exécuté après le constructeur.
Il est indispensable pour nettoyer un ensemble d'objets.

1.3 On repète un constructeur d'une classe par son nombre et/ou type d'argument.
Il peut y en avoir plusieurs afin d'initialiser un même objet, mais de manière différente.

1.4 La surdéfinition d'une fonction est le fait d'appeler plusieurs fonction par le même nom, mais avec un des argument différents.

1.5 la définition de public est que toutes les instances de la classe extérieur de la classe y auront accès.
La définition de private est que tout ce qu'il y a d'écrit après devient innaccessible.
Seul la classe ou les méthodes de la classe y auront accès.
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
	//Afficher les caractéristiques du Cadre ;
	void affiche_crt_Cadre();

	// Calculer la surface du Cadre ;
	int calcul_srfc(); // note personnelle / rappel : pas de void, car il faut récuper le résultat;
	void affiche_crt_calculS(int n_srfc);

	// Calculer le périmètre du Cadre ;
	int calcul_prmtr();
	void affiche_crt_calculP(int n_prmtr);


	//Pouvoir modifier : la longueur - la largeur - le motif du tracé ;
	void mdftn_Cadre();
	//Pouvoir récupérer : la longueur - la largeur - le motif du tracé ;



	// Tester si le cadre est de forme rectangulaire ou carré via la méthode : booleen IsCarre() qui retourne true->carrée/false->rectangle ;
	bool IsCarre(CCadre) const;
//	void affiche_Bool(bool rep_IsCarre);

	//Rajouter un constructeur avec les paramètre par défaut : x = 10 _ y = 5 _ largeur = 5 _ longueur = 2*largeur _ '*' ;
	CCadre(); //char chr_mtf


	//Un destructeur ;
//	~CCadre();


	//2.2 Ajouter une fonction de rotation, pour opérer une rotation d'angle Theta à partir du point d'ancrage.
	int abscisse();
	int ordonnee();
	void rotation(int);
//	float theta();

	//2.3 Ajouter la donnée membre ptrCharNom_Cadre de type char*

};
