//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Calculs Segments
// Nom du fichier 		: mainProjet1_s1.c
// Date de création 	: 21.10.2022
// Date de modification : 10.12.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques			: voir donnee de l'épreuve            
//----------------------------------------------------------------------------------//
//-- directive préprocesseur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//--- librairie standart ---//
#include <stdio.h>                  // entrée - sortie
#include <stdlib.h>

//--- librairie perso ---//
#include "MesFonctions.h"

//-- déclaration de constantes --// 
const char* ptNOM_CANDIDAT = "BSH"; 
const char VERSION_PROJET = 1; 
const unsigned short ANNEE_TEST = 2024; 

//-- programme principal --// 
void main()
{
	//-- déclaration de variables locales --//
	char index; 
	float valUtilisateur, tbValeurUser[4];
	char text_;
	int cadrant_ptA, quadrant_ptB;
	
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
	//-> détermine le quadrant d'un point orthonormé 
	
	cadrant_ptA = DeterminerQuadrant_PointA(ptA_x, ptA_y);
	quadrant_ptB = DeterminerQuadrant_PointB(ptB_x, ptB_y);
	//-> Calcul du segment A-B 
	longeurSegment = CalculerDistance_A_B(ptA_x, ptA_y, ptB_x, ptB_y);

	//-> détermination du point milieu du segment A-B
	ptM_x = CalculerMilieuAxe_X(ptA_x, ptB_x);
	ptM_y = CalculerMilieuAxe_Y(ptA_y, ptB_y);

	//-> Calul de la pente du segment A-B 
	penteSegment = CalculerPenteSeg_A_B(ptA_x, ptA_y, ptB_x, ptB_y);

	//-> Afficher différentes information 
	//-> information sur le point en lui-même 
	printf("\n POINT A est a la corrdonnee : [ %1.2f ; %1.2f ]", ptA_x, ptA_y);
	if (cadrant_ptA < 4) {
		printf(" dans le cadrant %d ", cadrant_ptA);
	}
	else if (cadrant_ptA == 5) {
		printf(" dans le cadrant dans l'axe des ordonné ");
	}
	else if (cadrant_ptA == 6) {
		printf(" dans le cadrant dans l'axe des abcisses ");
	}
	else if (cadrant_ptA == 7) {
		printf(" dans le cadrant dans le centre de l'axe ");
	}

	printf("\n POINT B est a la corrdonnee : [ %1.2f ; %1.2f ]", ptB_x, ptB_y);
	if (quadrant_ptB < 4) {
		printf(" dans le cadrant %d ", quadrant_ptB);
	}
	else if (quadrant_ptB == 5) {
		printf(" dans le cadrant dans l'axe des ordonné ");
	}
	else if (quadrant_ptB == 6) {
		printf(" dans le cadrant dans l'axe des abcisses ");
	}
	else if (quadrant_ptB == 7) {
		printf(" dans le cadrant dans le centre de l'axe ");
	}
	
	//printf("\n POINT A est a la corrdonnee : [ %1.2f ; %1.2f ] dans le cadrant %1.2d ", ptA_x, ptA_y, cadrant_ptA);
	//printf("\n POINT B est a la corrdonnee : [ %1.2f ; %1.2f ] dans le cadrant %d ", ptB_x, ptB_y, quadrant_ptB);
	
	
	//-- information sur le segment A-B --//  
	//-> longeur du Segment
	printf("\n longeur du segment : %1.2lf ", longeurSegment); 
	
	//-> point milieu du segement 
	printf("\n point milieu du segement A-B est : [ %1.2f ; %1.2f ] ",ptM_x,ptM_y);
	
	//-> pente du segement A-B
	printf("\n pente du segement : %1.2f \n",penteSegment);

	//pause -> system
	system("pause"); 
	
}