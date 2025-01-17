/*
*------------------------------------------------------------------------
* Nom du projet					: Projet 1 - Calculs Segments
* Date de cr�ation du projet	: 12.12.2024
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: KGR
* Date de cr�ation du fichier	: 12.12.2024
*------------------------------------------------------------------------
* Nom du dernier �diteur		: KGR
* Version						: x.1
* Date de derni�re modification	: 12.12.2024
*------------------------------------------------------------------------
* But du fichiers				: d�claration de fonctions
* commentaire					:
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/
#include <stdio.h>                  // entr�e - sortie
//#include <stdlib.h>
#include <math.h>

/*-- librairie priv� --*/
#include "MesFonctions.h"

/*-- d�claration variable --*/


/*-- d�claration fonction --*/
// Fonction de calcule distance A-B
double CalculerDistance_A_B(double ptA_x, double ptA_y, double ptB_x, double ptB_y)
{

	double X = ptB_x - ptA_x;
	double Y = ptB_y - ptA_y;
	double A = pow(X, 2);
	double B = pow(Y, 2);
	double distance = sqrt(A + B);

	return (distance);

}

// Fonction calcule point milieux
float CalculerMilieuAxe_X(float A, float B)
{
	
	float ptM_z = 0;
	float ptM_x = 0;
	float ptM_y = 0;
	ptM_x = (A + B) / 2;
	ptM_y = (A + B) / 2;
	if (ptM_x != 0)
	{
		ptM_z = ptM_x;
	}
	if (ptM_y != 0)
	{
		ptM_z = ptM_y;
	}


	return (ptM_z);
}


// Fonction calcule pente segment A-B
float CalculerPenteSeg_A_B(float A, float B, float C, float D) 
{
	float deltaX = A - B;
	float deltaY = C - D;
	float pente = deltaY / deltaX;

	return (pente);

}

// Fonction determiner quadrant point X
char DeterminerQuadrant_PointX(char X, char Y)
{
	char quadrant;
	
	
	if ((X > 0) && (Y > 0))
	{
		quadrant = '1';
	}
	if ((X < 0) && (Y < 0))
	{
		quadrant = '3';
	}
	if ((X > 0) && (Y < 0))
	{
		quadrant = '4';
	}
	if ((X < 0) && (Y > 0))
	{
		quadrant = '2';
	}
	if ((X = 0) && (Y = 0))
	{
		quadrant = '0';
	}
	


	return (quadrant);
}


/*-- documentation --*/

