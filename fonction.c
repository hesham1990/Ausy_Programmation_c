#include "entete.h"

/*
void calculer_rendu_monnaie(int prix, int montant_paye)

{
    int  reste;
    int  billet_20=0, billet_10=0, billet_5=0, piece_2=0, piece_1=0 ;



    if (montant_paye < prix)
    {
        printf("Le montant paye est insuffisant.\n");
        
    }





else if(montant_paye== prix)
{
    printf("Pas de monnaie a rendre.\n");
    
}
else
{

    reste = montant_paye - prix;


        billet_20 = reste / 20;
        reste = reste % 20;


        billet_10 = reste / 10;
        reste = reste % 10;


        billet_5 = reste / 5;
        reste = reste % 5;


        piece_2 = reste / 2;
        reste = reste % 2;


        piece_1 = reste / 1;
        reste = reste % 1 ;


}

    printf("\n_____Montant a rendre_____\n");



	if (billet_20 > 0)
        printf("Billet(s) de 20 euros : %d\n", billet_20);


         if(billet_10 > 0)
        printf("Billet(s) de 10 euros : %d\n", billet_10);


        if(billet_5 > 0)
        printf("Billet(s) de 5 euros : %d\n", billet_5);




        if(piece_2 > 0)
        printf("Piece(s) de 2 euro  : %d\n", piece_2);



    	if(piece_1 > 0)
        printf("Piece(s) de 1 euro  : %d\n", piece_1);

}


*/
void flushBuffer(void)
{
	int c = 0;
	while(c != '\n' && c != EOF)
	c = getchar();
}



void calculer_rendu_monnaie(int prix, int  montant_paye) 

{
    int billets[] = {20, 10, 5};
    float pieces[] = {2, 1};
    float montant_rendu = montant_paye - prix;
    int i;

    if (montant_paye < prix)
            {
                  printf("Le montant paye est insuffisant.\n");
                   
             } else if (montant_paye == prix)
			{
                   	printf("Pas de monnaie a rendre.\n");
    			}

         printf("\n_____Montant a rendre_____\n");

    for (i = 0; i < 3; i++) 
    {
        int nombre_billets = montant_rendu / billets[i];

        if (nombre_billets > 0)
	 {
            printf("%d billet(s) de %d euros\n", nombre_billets, billets[i]);
            montant_rendu -= nombre_billets * billets[i];
         }
    }

    for (i = 0; i < 2; i++) 
    {
        int nombre_pieces = montant_rendu / pieces[i];
        if (nombre_pieces > 0) 
	{
            printf("%d pice(s) de %.1f euros\n", nombre_pieces, pieces[i]);
            montant_rendu -= nombre_pieces * pieces[i];
        }
    }
 
}




