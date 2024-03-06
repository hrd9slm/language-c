#include <stdio.h>
#include <stdlib.h>



int main() {
    int nombre,inverse,N ;
    printf("entrer votre nombre");
    scanf("%d",&nombre);
    N=nombre;
    while (nombre !=0){
        inverse=(inverse*10)+(nombre%10);
        nombre/=10;
    }

    if(N==inverse){
        printf("le nombre %d est palindrome",N);
    }else{
         printf("le nombre %d est n est pas palindrome",N);
    }

    return 0;
}
