//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Calculs Segments
// Nom du fichier 		: mainProjet1_s1.c
// Date de cr�ation 	: 21.10.2022
// Date de modification : 10.12.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques			: voir donnee de l'�preuve            
//----------------------------------------------------------------------------------//
//-- directive pr�processeur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//--- librairie standart ---//
#include <stdio.h>                  // entr�e - sortie
//#include <stdlib.h>
#include <math.h>
//--- librairie perso ---//
#include "MesFonctions.h"

//-- d�claration de constantes --// 
const char* ptNOM_CANDIDAT = "KGR"; 
const char VERSION_PROJET = 1; 
const unsigned short ANNEE_TEST = 2024; 

//-- programme principal --// 
void main()
{
	//-- d�claration de variables locales --//
	char index, cadrant_ptA, quadrant_ptB; 
	float valUtilisateur, tbValeurUser[4];
	
	//-> variables pour les points orthonorm�s 
	float ptA_x, ptA_y, ptB_x, ptB_y, ptM_x, ptM_y; 
	float penteSegment; 
	double longeurSegment; 

	//-- message utilisateur --// 
	printf("-- TEST n%02d - annee : %d - Nom Candidat : %s --\n", VERSION_PROJET, ANNEE_TEST, ptNOM_CANDIDAT); 
	
	//-- demander valeur � l'utilisateur --// 
	for (index = 0; index < 4; index++)
	{
		//-- si celle-ci n'est pas correct -> nouvelle demande --// 
		do
		{
			//-- messgae utilisateur --// 
			printf("\nEntrer une valeur entre %.2f et %.2f : ", LIMITE_MIN, LIMITE_MAX);

			//-- r�cuperation valeur utilisateur --// 
			scanf("%f", &valUtilisateur);

			//-- nettoyer le bufferclavier --// 
			while ((getchar() != '\n') && (getchar() != EOF));

		} while ((valUtilisateur < LIMITE_MIN) || (valUtilisateur > LIMITE_MAX));

		//-- enregistrement de la valeur utilisateur dans un tableau
		tbValeurUser[index] = valUtilisateur; 
	}

	//-- MAJ des points orthornorm�s A et B => code pas optimale 
	ptA_x = tbValeurUser[0];
	ptA_y = tbValeurUser[1];
	ptB_x = tbValeurUser[2];
	ptB_y = tbValeurUser[3];
	
	//-- appel de fonction --// 
	//-> d�termine le quadrant d'un point orthonorm� 
	cadrant_ptA = DeterminerQuadrant_PointX((char) ptA_x, (char) ptA_y);
	quadrant_ptB  = DeterminerQuadrant_PointX((char) ptB_x, (char) ptB_y);
	//-> Calcul du segment A-B 
	longeurSegment = CalculerDistance_A_B(ptA_x, ptA_y, ptB_x, ptB_y);

	//-> d�termination du point milieu du segment A-B
	ptM_x = CalculerMilieuAxe_X(ptA_x, ptB_x);
	ptM_y = CalculerMilieuAxe_X(ptA_y, ptB_y);

	//-> Calcul de la pente du segment A-B 
	penteSegment = CalculerPenteSeg_A_B(ptA_x, ptA_y, ptB_x, ptB_y);

	//-> Afficher diff�rentes information 
	//-> information sur le point en lui-m�me 
	printf("\n POINT A est a la corrdonnee : [ %.2f ; %.2f ] dans le cadrant %c ", ptA_x, ptA_y, cadrant_ptA);
	printf("\n POINT B est a la corrdonnee : [ %.2f ; %.2f ] dans le cadrant %c ", ptB_x, ptB_y, quadrant_ptB);
	
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