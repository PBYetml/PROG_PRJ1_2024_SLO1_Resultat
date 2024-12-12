#include <stdio.h>  
#include <stdlib.h>
#include "../MesFonctions.h"



	//commentaire
short CalculerDistance_(ptA, ptA)
{

	//declaration
	char index, cadrant_ptA, quadrant_ptB;
	float valUtilisateur, tbValeurUser[4];

	for (index = 0; index < 4; index++)
	{
		//-- si celle-ci n'est pas correct -> nouvelle demande --// 
		do
		{
			//-- messgae utilisateur --// 
			printf("\nEntrer une valeur entre %.2f et %.2f : ", LIMITE_MIN, LIMITE_MAX);

			//-- récuperation valeur utilisateur --// 
			scanf("%f", &valUtilisateur);

			//-- nettoyer le bufferclavier --// 
			while ((getchar() != '\n') && (getchar() != EOF));

		} while ((valUtilisateur < LIMITE_MIN) || (valUtilisateur > LIMITE_MAX));

		//-- enregistrement de la valeur utilisateur dans un tableau
		tbValeurUser[index] = valUtilisateur;
	}
}

