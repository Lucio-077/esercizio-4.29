#include <stdio.h>

int main(void) {
    int totale=0,numero1,numero2;
    printf("inserisci il primo numero: ");
 scanf("%d",&numero1);
    printf("inserisci il secondo numero: ");
    scanf("%d",&numero2);
    for(int i=1;i<=numero2;i++) {
        totale= totale+numero1;
    }
        printf("%d * %d = %d", numero1,numero1,totale);


}
