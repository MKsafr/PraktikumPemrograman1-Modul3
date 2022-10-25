#include <stdio.h>

int main (void)
{
    int bil ;
    scanf ("%d", &bil);
    if (bil >= 80){printf("A");}
    else if (bil <=79 && bil >= 70){printf("B");}
    else if (bil <=69 && bil >= 60){printf("C");}
    else if (bil <=59 && bil >= 50){printf("D");}
    else {printf("E");}
    return 0;
}
