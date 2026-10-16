#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LONGUEUR 50

int main(void)
{
    int valeurs[NB_VALEURS] = { 8, 4, 12 };
    int maximum = valeurs[0];
    for (int i = 1; i < NB_VALEURS; i++) {
        if (valeurs[i] > maximum) {
            maximum = valeurs[i];
        }
    }

     double echelle = (double) MAX_LONGUEUR / maximum;

    for (int i = 0; i < NB_VALEURS; i++) {
        printf("| ");
        for (int j = 0; j < valeurs[i]; j++) {
            printf("x");
        }
        printf(" %d\n", valeurs[i]);
    }
    printf("+-------------------------------------------------------\n");

    return 0;
}
