//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Calculs Segments
// Nom du fichier 		: mesFichiers.c
// Date de création 	: 12.12.2024
// Date de modification : 12.12.2024
//
// Auteur 				: Diego Alec Savary
//
// Description          : fihier source ou vont veir implementer les fonstion de calculs
//
// Remarques			: voir donnee de l'épreuve            
//----------------------------------------------------------------------------------//


//--- librairie standart ---//
#include <stdio.h>                  // entrée - sortie
#include <stdlib.h>
#include <math.h>

//--- librairie perso ---//
#include "MesFonctions.h"


double CalculerDistance_A_B(float pointA_x, float pointA_y, float pointB_x, float pointB_y, long distance)
{
	distance = sqrt(powf(pointB_x - pointA_x, 2) + powf(pointB_y - pointA_y, 2));
	

	return distance;
}

double CalculerMilieuAxe_X(float pointA_z, float pointB_z, float pointM_z)
{
	pointM_z = (pointA_z + pointB_z)/2;


	return pointM_z;
}

double CalculerPenteSeg_A_B(float pointA_x, float pointA_y, float pointB_x, float pointB_y, float pente)
{
	pente = (pointB_y - pointA_y)/(pointB_x - pointA_x);

	return pente;
}
//
double CalculerQuadrant_PointX(float PointX_x, float PointX_y, char quadrant)
{
	if ((PointX_x && PointX_y) > 0)
	{
		quadrant = "cadran 1";
	}
	else if ((PointX_x && PointX_y) < 0)
	{
		quadrant = "cadran 3";
	}
	else if ((PointX_x < 0) && (PointX_y > 0))
	{
		quadrant = "cadran 2";
	}
	else if ((PointX_x > 0) && (PointX_y < 0))
	{
		quadrant = "cadran 4";
	}

	if (PointX_x == 0)
	{
		quadrant = "L'axe des ordonnées";
	}
	if (PointX_y == 0)
	{
		quadrant = "L'axe des abscisses";
	}

	return quadrant;
}