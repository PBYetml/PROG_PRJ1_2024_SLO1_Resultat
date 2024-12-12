//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Calculs Segment
// Nom du fichier 		: MesFonctions.h
// Date de création 	: 21.10.2022
// Date de modification : 12.12.2024
//
// Auteur 				: Philou (Ph. Bovey)
// 
// Modification			: Louis Cardinaux
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
double CalculerDistance_A_B(float pointA_x, float pointA_y, float pointB_x, float pointB_y);

//-> calculer le point milieu d'un point orthonormé 
float CalculerMilieuAxe_X(float pointA_z, float pointB_z);

//-> calculer la pente du segment A-B  
float CalculerPenteSeg_A_B(float pointA_x, float pointA_y, float pointB_x, float pointB_y);

//-> détermine dans quel quadrant se situe le point orthonormé 
char DeterminerQuadrant_PointX(float pointX_x, float pointX_y);


#endif // !MES_FONCTIONS_H 
