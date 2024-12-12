//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Calculs Segment
// Nom du fichier 		: MesFonctions.h
// Date de création 	: 21.10.2022
// Date de modification : 10.12.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : voir la donnée du cdc 
//
// Remarques			: voir donnee de l'épreuve            
//----------------------------------------------------------------------------------//
#ifndef MES_FONCTIONS_H 
#define MES_FONCTIONS_H

//-- déclaration de définition --//
//-- definition --// 
#define LIMITE_MAX	100.0
#define LIMITE_MIN	-100.0


//-- déclaration de prototype --// 

//-> calculer la longeur d'un segment A-B 
double CalculerDistance_A_B(pointA_x, pointA_y, pointB_x, pointB_y, distance);

//-> calculer le point milieu d'un point orthonormé 

double CalculerMilieuAxe_X(pointA_z, pointB_z, pointM_z);
//-> calculer la pente du segment A-B  
double CalculerPenteSeg_A_B(pointA_x, pointA_y, pointB_x, pointB_y, pente);

//-> détermine dans quel quadrant se situe le point orthonormé 
double CalculerQuadrant_PointX(PointX_x, PointX_y, quadrant);


#endif // !MES_FONCTIONS_H 
