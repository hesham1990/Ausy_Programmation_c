#include "entete.h"

int main()
{
    int choix = 0;
    int  prix = 0, montant_paye = 0, montant_reste=0;
 flushBuffer();
  
    do
    {
 	
        printf("\n-------------MENU----------------\n");
        printf("1 - Entrez le prix de l'article , le montant paye et claculez le rendre\n");
        printf("0 - Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            printf("Entrez le prix de l'article : ");
            scanf("%d", &prix);
            printf("Entrez le montant paye : ");
            scanf("%d", &montant_paye);
            montant_reste = montant_paye - prix;
            printf("Montant a rendre : %d euros\n", montant_reste);

            calculer_rendu_monnaie(prix, montant_paye);
            break;


        case 0:
            printf("Au revoir !\n");
            break;


        default:
            printf("Choix invalide.\n");
            break;
        }
    }while (choix != 0);

    return 0;
}


