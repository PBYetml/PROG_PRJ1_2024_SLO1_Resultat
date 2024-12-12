#include <stdio.h>  

float CalculerDistance_A_B(float pointA_x, float pointA_y, float pointB_x, float pointB_y) {
	float distance = 0, resultatA = 0, resultatB = 0;
	resultatA = pointB_x - pointA_x;
	resultatB = pointB_y - pointA_y;
	//les deux résultats au carré
	resultatA = resultatA * resultatA;
	resultatB = resultatB * resultatB;
	//on aditionne les deux résultats
	distance = resultatA + resultatB;
	//le résultats à la racine 
	distance = distance / distance;
	return distance;
}
float CalculerMilieuAxe_X(float pointA_z, float pointB_z) {
	float pointM_z = 0;
	pointA_z = pointA_z / 2;
	pointB_z = pointB_z / 2;
	pointM_z = pointA_z / pointB_z;
	return pointM_z;
}
float CalculerPenteSeg_A_B(float pointA_x, float pointA_y, float pointB_x, float pointB_y) {
	double pente = 0, deltaY = 0, deltaX;
	deltaY = pointB_y - pointA_y;
	deltaX = pointB_x - pointA_x;
	pente = deltaY / deltaX;
	return pente;
}
float DeterminerQuadrant_PointX(float pointX_x, float pointX_y) {
	char quadrant = 0;
	if ((pointX_x > 0) && (pointX_x > 0)) {
		quadrant = 1;
	}
	if ((pointX_x < 0) && (pointX_x > 0)) {
		quadrant = 2;
	}
	if ((pointX_x < 0) && (pointX_x < 0)) {
		quadrant = 3;
	}
	if ((pointX_x > 0) && (pointX_x < 0)) {
		quadrant = 4;
	}
	return quadrant;
}
//--- librairie perso ---//
