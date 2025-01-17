//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Calculs Segment
// Nom du fichier 		: MesFonctions.h
// Date de cr�ation 	: 21.10.2022
// Date de modification : 10.12.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : voir la donn�e du cdc 
//
// Remarques			: voir donnee de l'�preuve            
//----------------------------------------------------------------------------------//
#ifndef MES_FONCTIONS_H 
#define MES_FONCTIONS_H

//-- d�claration de d�finition --//
//-- definition --// 
#define LIMITE_MAX	100.0
#define LIMITE_MIN	-100.0


//-- d�claration de prototype --// 
//-> calculer la longeur d'un segment A-B 
double CalculerDistance_A_B(double ptA_x, double ptA_y, double ptB_x, double ptB_y);

//-> calculer le point milieu d'un point orthonorm� 
float CalculerMilieuAxe_X(float A, float B);

//-> calculer la pente du segment A-B  
float CalculerPenteSeg_A_B(float A, float B);

//-> d�termine dans quel quadrant se situe le point orthonorm� 
char DeterminerQuadrant_PointX(char X, char Y);


#endif // !MES_FONCTIONS_H 
