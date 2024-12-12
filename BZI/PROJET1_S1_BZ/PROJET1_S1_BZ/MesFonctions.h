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
double CalculerDistance_A_B(float pointA_x, float pointB_x, float pointA_y, float pointB_y);
float CalculerMilieuAxe_x(float pointA_z, float pointB_z);
float CalculerPenteDeg_A_B(float pointA_x, float pointB_x, float pointA_y, float pointB_y);
char DeterminerQuadrant_PointX(char pointX_x, char pointX_y);
#define MES_FONCTIONS_H

//-- déclaration de définition --//
//-- definition --// 
#define LIMITE_MAX	100.0
#define LIMITE_MIN	-100.0


//-- déclaration de prototype --// 

//-> calculer la longeur d'un segment A-B 


//-> calculer le point milieu d'un point orthonormé 


//-> calculer la pente du segment A-B  


//-> détermine dans quel quadrant se situe le point orthonormé 



#endif // !MES_FONCTIONS_H 
