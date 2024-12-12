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
const char* ptNOM_CANDIDAT = "Vos initiales"; 
const char VERSION_PROJET = 1; 
const unsigned short ANNEE_TEST = 2024; 

//-- programme principal --// 
void main()
{
	//-- déclaration de variables locales --//
	char index, cadrant_ptA, quadrant_ptB; 
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
	//-> détermine le quadrant d'un point orthonormé 


	//-> Calcul du segment A-B 


	//-> détermination du point milieu du segment A-B
 

	//-> Calul de la pente du segment A-B 


	//-> Afficher différentes information 
	//-> information sur le point en lui-même 
	printf("\n POINT A est a la corrdonnee : [ xx.xx ; yy.yy ] dans le cadrant X "); 
	printf("\n POINT B est a la corrdonnee : [ xx.xx ; yy.yy ] dans le cadrant X ");
	
	//-- information sur le segment A-B --//  
	//-> longeur du Segment
	printf("\n longeur du segment : xx.xx "); 
	
	//-> point milieu du segement 
	printf("\n point milieu du segement A-B est : [ xx.xx ; yy.yy ] ");
	
	//-> pente du segement A-B
	printf("\n pente du segement : xx.xx \n");

	//pause -> system
	system("pause"); 
	
}