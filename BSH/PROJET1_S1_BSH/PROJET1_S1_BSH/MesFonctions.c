#include "MesFonctions.h"
#include <math.h>   
#include <corecrt_math_defines.h>
#include <stdio.h>
#include <stdint.h>

//-> calculer la longeur d'un segment A-B 
double CalculerDistance_A_B(float PointA_x, float PointA_y, float PointB_x, float PointB_y) {
	double distance = 0;
	distance = sqrt(pow((PointA_x + PointA_y), 2) + pow((PointB_x + PointB_y), 2));
	return distance;
}

//-> calculer le point milieu d'un point orthonormé 


//fonction pour trouver le milieu de l'axe x
float CalculerMilieuAxe_X(float pointA_x, float pointB_x) {
	float pointM_x = 0;
	pointM_x =(pointA_x + pointB_x) / 2;
	return pointM_x;
}
//fonction pour trouver le milieu de l'axe y
float CalculerMilieuAxe_Y(float pointA_y, float pointB_y) {
	float pointM_y = 0;
	pointM_y = (pointA_y + pointB_y) / 2;
	return pointM_y;
}

//-> calculer la pente du segment A-B  
float CalculerPenteSeg_A_B(float PointA_x, float PointA_y, float PointB_x, float PointB_y) {
	float pente = 0;
	pente = (PointA_y - PointB_y) / (PointA_x - PointB_x);
	return pente;
}

//-> détermine dans quel quadrant se situe le point orthonormé 
int8_t DeterminerQuadrant_PointA(float PointA_x, float PointA_y) {
	int8_t quadrant;


	if (PointA_x > 0 && PointA_y < 0) {
		quadrant = 4;
	}
	if (PointA_x < 0 && PointA_y < 0) {
		quadrant = 3;
	}
	if (PointA_x < 0 && PointA_y > 0) {
		quadrant = 2;
	}
	if (PointA_x > 0 && PointA_y > 0) {
		quadrant = 1;
	}
	if (PointA_x == 0 && PointA_y != 0) {
		quadrant = 6;
	}
	if (PointA_x != 0 && PointA_y == 0) {
		quadrant = 5;
	}
	if (PointA_x == 0 && PointA_y == 0) {
		quadrant = 7;
	}
	return quadrant;
}

int8_t DeterminerQuadrant_PointB(float PointB_x,float PointB_y){
	int8_t quadrant = 0;

	if (PointB_x > 0 && PointB_y < 0) {
		quadrant = 4;
	}
	if (PointB_x < 0 && PointB_y < 0) {
		quadrant = 3;
	}
	if (PointB_x < 0 && PointB_y > 0) {
		quadrant = 2;
	}
	if (PointB_x > 0 && PointB_y > 0) {
		quadrant = 1;
	}
	if (PointB_x == 0 && PointB_y != 0) {
		quadrant = 6;
	}
	if (PointB_x != 0 && PointB_y == 0) {
		quadrant = 5;
	}
	if (PointB_x == 0 && PointB_y == 0) {
		quadrant = 7;
	}
	return quadrant;
}
