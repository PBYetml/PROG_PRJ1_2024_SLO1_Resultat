/*
*------------------------------------------------------------------------
* Nom du projet					: Projet 1 - Calculs Segments
* Date de création du projet	: 12.12.2024
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: KGR
* Date de création du fichier	: 12.12.2024
*------------------------------------------------------------------------
* Nom du dernier éditeur		: KGR
* Version						: x.1
* Date de dernière modification	: 12.12.2024
*------------------------------------------------------------------------
* But du fichiers				: déclaration de fonctions
* commentaire					:
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/
#include <stdio.h>                  // entrée - sortie
#include <stdlib.h>
#include <math.h>

/*-- librairie privé --*/
#include "MesFonctions.h"

/*-- déclaration variable --*/


/*-- déclaration fonction --*/
// Fonction de calcule distance A-B
double CalculerDistance_A_B(ptA_x, ptA_y, ptB_x, ptB_y)
{
	double distance = sqrt((ptB_x - ptA_x) * (ptB_x - ptA_x) + (ptB_y - ptA_y) * (ptB_y - ptA_y));

	return (distance);
}

// Fonction calcule point milieux
float CalculerMilieuAxe_X(ptA_x, ptA_y, ptB_x, ptB_y)
{
	
	float ptM_z = 0;
	float ptM_x = (ptA_x + ptB_x) / 2;
	float ptM_y = (ptA_y + ptB_y) / 2;
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
float CalculerPenteSeg_A_B(ptA_x, ptA_y, ptB_x, ptB_y)
{
	float deltaX = ptA_x - ptB_x;
	float deltaY = ptA_y - ptB_y;
	float pente = deltaY / deltaX;

	return (pente);

}

// Fonction determiner quadrant point X
int DeterminerQuadrant_PointX(ptA_x, ptA_y, ptB_x, ptB_y)
{
	int quadrant = 0;
	int pointX_A = (int)ptA_x;
	int pointY_A = (int)ptA_y;
	int pointX_B = (int)ptB_x;
	int pointY_B = (int)ptB_y;
	if (quadrant = 0)
	{
		if ((pointX_A < 0) && (pointY_A < 0))
		{
			quadrant = 1;
		}
		if ((pointX_A > 0) &-4
			-& (pointY_A > 0))
		{
			quadrant = 3;
		}
		if ((pointX_A < 0) && (pointY_A > 0))
		{
			quadrant = 4;
		}
		if ((pointX_A > 0) && (pointY_A < 0))
		{
			quadrant = 2;
		}
		if ((pointX_A = 0) && (pointY_A = 0))
		{
			quadrant = 0;
		}
		if ((pointX_B < 0) && (pointY_B < 0))
		{
			quadrant = 1;
		}
		if ((pointX_B > 0) && (pointY_B > 0))
		{
			quadrant = 3;
		}
		if ((pointX_B < 0) && (pointY_B > 0))
		{
			quadrant = 4;
		}
		if ((pointX_B > 0) && (pointY_B < 0))
		{
			quadrant = 2;
		}
		if ((pointX_B = 0) && (pointY_B = 0))
		{
			quadrant = 0;
		}
	}


	return (quadrant);
}


/*-- documentation --*/

