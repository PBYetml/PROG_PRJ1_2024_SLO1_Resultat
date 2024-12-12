//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Calculs Segments
// Nom du fichier 		: mainProjet1_s1.c
// Date de création 	: 21.10.2022
// Date de modification : 12.12.2024  
//
// Auteur 				: Philou (Ph. Bovey)
//
// Modification			: Louis Cardinaux
// 
// Description          : défini les deux points cartésien (A et B) dans un plan
//						  horthonormé (plan X-Y) pour calculer la distance entre les deux points,
//						  les coordonée du point milieu des points A et B, dans quelle quadrant 
//						  les points A et B sont et la pente du segment A et B.
//
// Remarques			: voir donnee de l'épreuve            
//----------------------------------------------------------------------------------//
//-- directive préprocesseur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//--- librairie standart ---//
#include <stdio.h>                  // entrée - sortie
#include <stdlib.h>
#include <math.h>

//--- librairie perso ---//
#include "MesFonctions.h"

//-- déclaration de constantes --// 
const char* ptNOM_CANDIDAT = "LCX"; 
const char VERSION_PROJET = 1; 
const unsigned short ANNEE_TEST = 2024; 

//-- programme principal --// 
void main()
{
	//-- déclaration de variables locales --//
	char index, quadrant_ptA, quadrant_ptB;
	float valUtilisateur, tbValeurUser[4];
	
	//-> variables pour les points orthonormés 
	float ptA_x, ptA_y, ptB_x, ptB_y, ptM_x, ptM_y; 
	float penteSegment;
	double longeurSegment; 

	//-- message utilisateur --// 
	printf("-- TEST n%02d - annee : %d - Nom Candidat : %s --\n", VERSION_PROJET, ANNEE_TEST, ptNOM_CANDIDAT); 
	
	//-- demander valeur à l'utilisateur --// 
	for (index = 0; index < 4; index++)
	{
		//-- si celle-ci n'est pas correct -> nouvelle demande --// 
		do
		{
			//-- messgae utilisateur --// 
			printf("\nEntrer une valeur entre %.2f et %.2f : ", LIMITE_MIN, LIMITE_MAX);

			//-- récuperation valeur utilisateur --// 
			scanf("%f", &valUtilisateur);

			//-- nettoyer le bufferclavier --// 
			while ((getchar() != '\n') && (getchar() != EOF));

		} while ((valUtilisateur < LIMITE_MIN) || (valUtilisateur > LIMITE_MAX));

		//-- enregistrement de la valeur utilisateur dans un tableau
		tbValeurUser[index] = valUtilisateur; 
	}

	//-- MAJ des points orthornormés A et B => code pas optimale 
	ptA_x = tbValeurUser[0];
	ptA_y = tbValeurUser[1];
	ptB_x = tbValeurUser[2];
	ptB_y = tbValeurUser[3];

	
	//-- appel de fonction --// 
	//-> Calcul du segment A-B 
	longeurSegment = CalculerDistance_A_B(ptA_x, ptA_y, ptB_x, ptB_y);
	

	//-> détermination du point milieu du segment A-B
	ptM_x = CalculerMilieuAxe_X( ptA_x,  ptB_x); //point milieu en X
	ptM_y = CalculerMilieuAxe_X( ptA_y,  ptB_y); //point milieu en Y

	//-> Calul de la pente du segment A-B 
	penteSegment = CalculerPenteSeg_A_B( ptA_x, ptA_y, ptB_x, ptB_y);


	//-> détermine le quadrant d'un point orthonormé 
	quadrant_ptA = DeterminerQuadrant_PointX( ptA_x,  ptA_y); //quadrant pour le point A
	quadrant_ptB = DeterminerQuadrant_PointX( ptB_x,  ptB_y); //quadrant pour le point B
	
	//-> Afficher différentes information 
	//-> information sur le point en lui-même 
	printf("\n POINT A est a la corrdonnee : [ %.2f ; %.2f ] dans le quadrant %d ", ptA_x, ptA_y, quadrant_ptA);
	printf("\n POINT B est a la corrdonnee : [ %.2f ; %.2f ] dans le quadrant %d ", ptB_x, ptB_y, quadrant_ptB);
	
	//-- information sur le segment A-B --//  
	//-> longeur du Segment
	printf("\n longeur du segment : %.2f ", longeurSegment);
	
	//-> point milieu du segement 
	printf("\n point milieu du segement A-B est : [ %.2f ; %.2f ] ", ptM_x, ptM_y);
	
	//-> pente du segement A-B
	printf("\n pente du segement : %.2f \n", penteSegment);

	//pause -> system
	system("pause"); 
	
}

//Déclaration des fonctions

//-----------------------------------------------------------------------------------//
// Nom de la fonction	: CalculerDistance_A_B
// Date de création 	: 12.12.2024
// Date de modification : 
//
// Auteur 				: Louis Cardinaux
//
// Description          : Calcul du segment A-B 
//
// Remarques			: Prototype dans "MesFonction.h"            
//----------------------------------------------------------------------------------//
double CalculerDistance_A_B(float pointA_x, float pointA_y, float pointB_x, float pointB_y)
{
	double distance = sqrt(pow((pointB_x - pointA_x), 2) + pow((pointB_y - pointA_y), 2)); //calcule de la distance entre A et B
	return distance; //retourne la distance entre A et B
}

//-----------------------------------------------------------------------------------//
// Nom de la fonction	: CalculerMilieuAxe_X
// Date de création 	: 12.12.2024
// Date de modification : 
//
// Auteur 				: Louis Cardinaux
//
// Description          : détermination du point milieu du segment A-B
//
// Remarques			: Prototype dans "MesFonction.h"            
//----------------------------------------------------------------------------------//
float CalculerMilieuAxe_X(float pointA_z, float pointB_z)
{
	float pointM_z = (pointA_z + pointB_z) / 2; //calcule du point milieu pour X ou Y
	return pointM_z; //retourne la coordonnée en X ou Y du point milieu
}
//-----------------------------------------------------------------------------------//
// Nom de la fonction	: CalculerPenteSeg_A_B
// Date de création 	: 12.12.2024
// Date de modification : 
//
// Auteur 				: Louis Cardinaux
//
// Description          : Calul de la pente du segment A-B
//
// Remarques			: Prototype dans "MesFonction.h"            
//----------------------------------------------------------------------------------//
float CalculerPenteSeg_A_B(float pointA_x, float pointA_y, float pointB_x, float pointB_y)
{
	float pente = (pointA_y - pointB_y) / (pointA_x - pointB_x); // calcule de la pente 
	return pente;	//retourne la valeur de la pente
}

//-----------------------------------------------------------------------------------//
// Nom de la fonction	: DeterminerQuadrant_PointX
// Date de création 	: 12.12.2024
// Date de modification : 
//
// Auteur 				: Louis Cardinaux
//
// Description          : détermine le quadrant d'un point orthonormé
//
// Remarques			: Prototype dans "MesFonction.h"            
//----------------------------------------------------------------------------------//
char DeterminerQuadrant_PointX(float pointX_x, float pointX_y)
{
	char quadrant;
	if ((pointX_x > 0) && (pointX_y > 0)) { quadrant = 1; } // si X positif et y positif quadrant 1
	if ((pointX_x < 0) && (pointX_y > 0)) { quadrant = 2; } // si X negatif et y positif quadrant 2
	if ((pointX_x < 0) && (pointX_y < 0)) { quadrant = 3; } // si X negatif et y negatif quadrant 3
	if ((pointX_x > 0) && (pointX_y < 0)) { quadrant = 4; } // si X positif et y negatif quadrant 4
	return quadrant; //retourne dans quel quadrant et le point
	//c'est moche hien ^^
}