#include <stdlib.h>
#include <string.h>

struct card {
    char *face;
    char *suit;
};

int main(int argc, char *argv[])
{
    
    struct card aCard;
    struct card *cardPtr;

    aCard.face = "As";
    aCard.suit = "Espadas";

    cardPtr = &aCard;

    printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " de ", aCard.suit,
        cardPtr->face, " de ", cardPtr->suit, (*cardPtr).face, " de ",
        (*cardPtr).suit);

    int espera = 0;
    scanf("%d", espera);
    return 0;
}