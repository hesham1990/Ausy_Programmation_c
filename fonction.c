#include "entete.h"

/*
void calculer_rendu_monnaie(float prix, float montant_paye)

{
    float montant_rendu, reste;
    int billet_50=0, billet_20=0, billet_10=0, billet_5=0, piece_2=0, piece_1=0, piece_50=0, piece_20=0, piece_10=0, piece_05=0, piece_01=0;



    if (montant_paye < prix)
    {
        printf("Le montant paye est insuffisant.\n");
        return -1;
    }





else if(montant_paye== prix)
{
    printf("Pas de monnaie a rendre.\n");
    return 0;
}
else
{

    reste = montant_paye - prix;





        billet_50=reste/50.0;

        reste = fmod (reste, 50.0);

        billet_20 = reste / 20;
        reste = fmod (reste, 20.0);


        billet_10 = reste / 10;
        reste = fmod (reste, 10.0);


        billet_5 = reste / 5;
        reste = fmod (reste, 5.0);


        piece_2 = reste / 2;
        reste = fmod (reste, 2.0);


        piece_1 = reste / 1;
        reste = fmod (reste, 1.0);


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

   
    return 0;

}

*/



void calculer_rendu_monnaie(int prix, int  montant_paye) {
    int billets[] = {20, 10, 5};
    float pieces[] = {2, 1};
    float montant_rendu = montant_paye - prix;
    int i;

    if (montant_paye < prix) {
        printf("Le montant paye est insuffisant.\n");
        return;
    } else if (montant_paye == prix) {
        printf("Pas de monnaie a rendre.\n");
        return;
    }

    printf("\n_____Montant a rendre_____\n");

    for (i = 0; i < 3; i++) {
        int nombre_billets = montant_rendu / billets[i];

        if (nombre_billets > 0) {
            printf("%d billet(s) de %d euros\n", nombre_billets, billets[i]);
            montant_rendu -= nombre_billets * billets[i];
        }
    }

    for (i = 0; i < 2; i++) {
        int nombre_pieces = montant_rendu / pieces[i];
        if (nombre_pieces > 0) {
            printf("%d pice(s) de %.1f euros\n", nombre_pieces, pieces[i]);
            montant_rendu -= nombre_pieces * pieces[i];
        }
    }
}




/*
void calculer_rendu_monnaie(float prix, float  montant_paye) {
    int billets[] = {50,20, 10, 5};
    float pieces[] = {2,1 ,0.5 ,0.2 ,0.1 , 0.05 ,0.01};
    float montant_rendu = montant_paye - prix;
    int i;

    if (montant_paye < prix) {
        printf("Le montant paye est insuffisant.\n");
        return;
    } else if (montant_paye == prix) {
        printf("Pas de monnaie a rendre.\n");
        return;
    }

    printf("\n_____Montant a rendre_____\n");

    for (i = 0; i < 4; i++) {
        int nombre_billets = montant_rendu / billets[i];

        if (nombre_billets > 0) {
            printf("%d billet(s) de %d euros\n", nombre_billets, billets[i]);
            montant_rendu -= nombre_billets * billets[i];
        }
    }

    for (i = 0; i <7; i++) {
        int nombre_pieces = montant_rendu / pieces[i];
        if (nombre_pieces > 0) {
            printf("%d pice(s) de %.3f euros\n", nombre_pieces, pieces[i]);
            montant_rendu -= nombre_pieces * pieces[i];
        }
    }
}

*/
