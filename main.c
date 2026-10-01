#include <stdio.h>
#include "liste.h"

int main(void)
{
    Maillon *liste = NULL;
    for (int i = 1; i <= 5; i++) liste = liste_inserer(liste, i * 10);
    printf("compteur apres insertion : %d\n", liste_blocs_en_circulation());
    Maillon *liste3elements = NULL;
    for (int i = 1; i <= 3; i++) liste3elements = liste_inserer(liste3elements, i);

    printf("liste     : ");
    liste_afficher(liste);
    printf("longueur  : %d\n", liste_longueur(liste));
    printf("contient 30 : %s\n", liste_contient(liste, 30) ? "oui" : "non");

    liste_liberer(liste);
    liste_liberer(liste3elements);
    printf("liberee\n");
    printf("compteur apres liberation : %d\n", liste_blocs_en_circulation());
    return 0;
}
