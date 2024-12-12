#include <stdio.h>
#include <math.h>
#include "MesFonctions.h"
#include <stdlib.h>

double CalculerDistance_A_B(float pointA_x, float pointB_x, float pointA_y, float pointB_y) {

	double  distance = sqrt(((pointB_x - pointA_x)*(pointB_x - pointA_x)) + ((pointB_y - pointA_y)*(pointB_y - pointA_y)));

	return distance;
}

float CalculerMilieuAxe_x(float pointA_z, float pointB_z) {
	
	float pointM_A = pointA_z/2;
	float pointM_B = pointB_z/2;


	return pointM_A,pointM_B;

}

float CalculerPenteDeg_A_B(float pointA_x, float pointB_x, float pointA_y, float pointB_y) {
	
	float pente = (pointB_y-pointA_y) / (pointB_x-pointA_x);

	return pente;

}

char DeterminerQuadrant_PointX(float pointX_x, float pointX_y) {
	
	char quandrant = 0;

	if (pointX_x > 0 || pointX_y > 0) {
		quandrant = 1;
	}
	if (pointX_x < 0 || pointX_y > 0) {
		quandrant = 2;
	}
	if (pointX_x < 0 || pointX_y < 0) {
		quandrant = 3;
	}
	if (pointX_x > 0 || pointX_y < 0) {
		quandrant = 4;
	}


	return quandrant;
}