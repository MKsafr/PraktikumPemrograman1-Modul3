#include <stdio.h>

int main (void)
{
    int bil ;
    scanf ("%d", &bil);
    if (bil > 0){printf("positif");}
    else if (bil < 0){printf("negatif");}
    else {printf("nol");}
    return 0;
}
