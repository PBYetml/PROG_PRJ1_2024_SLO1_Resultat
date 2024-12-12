//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Calculs Segments
// Nom du fichier 		: mainProjet1_s1.c
// Date de création 	: 21.10.2022
// Date de modification : 12.12.2024
//
// Auteur 				: Henri Mott
//
// Description          : TEST
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



//-> calculer la longeur d'un segment A-B 
float CalculerDistance_A_B(float ptA_x, float ptA_y, float ptB_x, float ptB_y, float ptM_x, float ptM_y)	// Point 1
{
	//-> variables pour les points orthonormés 
	//float ptA_x, ptA_y, ptB_x, ptB_y, ptM_x, ptM_y;
	double longeurSegment; //double

	// Holder for calculation
	double x = 0;
	double y = 0;
	double holder = 0;

	//Calculation 
	x = ptB_x - ptA_x;
	x = x * x;

	y = ptB_y - ptB_y;
	y = y * y;
	holder = y + x;

	// Racine de 
	longeurSegment = holder , sqrt;	//Page 7-11

	return longeurSegment;
}
float CalculerMilieuAxe_X(float ptA_x, float ptB_x)	// Point 2
{
	// Holder for calculation
	double x = 0;
	double y = 0;
	double holder = 0;
	double ptM_x = 0;

	// Calculation
	holder = ptA_x + ptB_x;
	ptM_x = holder / 2;

	return ptM_x;
}
float CalculerMilieuAxe_Y(float ptA_y, float ptB_y)	// Point 2
{
	// Holder for calculation
	double x = 0;
	double y = 0;
	double holder = 0;
	double ptM_y = 0;

	// Calculation
	holder = ptA_y + ptB_y;
	ptM_y = holder / 2;

	return ptM_y;
}
float CalculerPenteSeg_A_B();	// Point 3
char DeterminerQuadrant_PointX(); //Point 4