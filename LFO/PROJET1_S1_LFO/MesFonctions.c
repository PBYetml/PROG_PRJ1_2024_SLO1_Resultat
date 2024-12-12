//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Calculs Segments
// Nom du fichier 		: MesFonctions.c
// Date de création 	: 12.12.2024
// Date de modification : 12.12.2024
//
// Auteur 				: Luca ferreiro
//
// Description          : 
//
// Remarques			:            
//----------------------------------------------------------------------------------//

#include "MesFonctions.h"


double CalculerDistance_A_B(float pointA_x, float pointA_y, float pointB_x, float pointB_y)
{
	/*VARIABLES*/
	double distance = 0.0;
	double points_x = 0.0;
	double points_y = 0.0;
	double pointX_Y = 0.0;
	
	/*CORP DE LA FONCTION*/
	points_x = pointB_x - pointA_x;
	points_x = points_x * points_x;	//calculer résultat de (pointB_x - pointA_x) au carré

	points_y = pointB_y - pointA_y;
	points_y = points_y * points_y;	//calculer résultat de (pointB_y - pointA_y) au carré

	pointX_Y = points_x + points_y;	//calculer le totale à mettre à la racine

	distance = sqrt(pointX_Y);		//calcule de la distance entre A et B

	return distance;
}//FIN

float CalculerMillieuAxe_X(float pointA_z, float pointB_z)
{
	/*VARIABLES*/
	float pointM_z = 0.0f;

	/*CORP DE LA FONCTION*/
	pointM_z = (pointA_z + pointB_z) / 2.0;

	return pointM_z;
}//FIN

float CalculerPenteSeg_A_B(float pointA_x, float pointA_y, float pointB_x, float pointB_y)
{
	/*VARIABLES*/
	float pente = 0.0f;
	float deltaY = 0.0f;
	float deltaX = 0.0f;

	/*CORP DE LA FONCTION*/
		/*CALCULE DES DELTAS*/
	deltaX = pointB_x - pointA_x;
	deltaY = pointB_y - pointA_y;

		/*CALCULE DE LA PENTE*/
	pente = deltaY / deltaX;

	return pente;
}//FIN

char DeterminerQuadrant_PointX(float pointX_x, float pointX_y)
{
	/*VARIABLES*/
	char quandrant = 0;

	/*CORP DE LA FONCTION*/
	if (pointX_y == 0)
		quandrant = 'A';	//le point est sur l'abscisse

	else if (pointX_x == 0)
		quandrant = 'O';	//le point est sur l'ordonnée

	else {

		if ((pointX_x > 0) && (pointX_y > 0))	//je pense que les conditions parlent d'elles mêmes, pas besoin de commentaire
			quandrant = '1';

		else if ((pointX_x < 0) && (pointX_y > 0))
			quandrant = '2';

		else if ((pointX_x < 0) && (pointX_y < 0))
			quandrant = '3';

		else if ((pointX_x > 0) && (pointX_y < 0))
			quandrant = '4';
	}
	return quandrant;
}//FIN
