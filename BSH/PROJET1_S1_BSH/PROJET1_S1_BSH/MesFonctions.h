//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Calculs Segment
// Nom du fichier 		: MesFonctions.h
// Date de création 	: 21.10.2022
// Date de modification : 10.12.2024
//
// Auteur 				: Benjamin Schafroth
//
// Description          : voir la donnée du cdc 
//
// Remarques			: voir donnee de l'épreuve            
//----------------------------------------------------------------------------------//
#ifndef MES_FONCTIONS_H 
#define MES_FONCTIONS_H
#include <stdint.h>
//-- déclaration de définition --//
//-- definition --// 
#define LIMITE_MAX	100.0
#define LIMITE_MIN	-100.0


//-- déclaration de prototype --// 

//-> calculer la longeur d'un segment A-B 
double CalculerDistance_A_B(float PointA_x, float PointA_y, float PointB_x, float PointB_y);

//-> calculer le point milieu d'un point orthonormé 

/* 
Bonsoir,
Etant donné que je n'ai pas compris la donné car elle n'est pas des plus claire, je suis partie du
principe que nous devons rentrer la valeur Ax et Bx dans calculer_milieu_axe_x car le z n'a aucun sens
dans cette situation. il y aura donc deux fois la fonction qui sera une pour l'axe des X et l'autre pour
l'axe des Y 
Bonne correction et une excellente soirée
Benjamin Schafroth
*/
//fonction pour trouver le milieu de l'axe x
float CalculerMilieuAxe_X(float pointA_x, float pointB_x);
//fonction pour trouver le milieu de l'axe y
float CalculerMilieuAxe_Y(float pointA_y, float pointB_y);

//-> calculer la pente du segment A-B  
float CalculerPenteSeg_A_B(float PointA_x, float PointA_y, float PointB_x, float PointB_y);

//-> détermine dans quel quadrant se situe le point orthonormé 
int8_t DeterminerQuadrant_PointA(float PointA_x, float PointA_y);
 int8_t DeterminerQuadrant_PointB(float PointB_x, float PointB_y);


#endif // !MES_FONCTIONS_H 
