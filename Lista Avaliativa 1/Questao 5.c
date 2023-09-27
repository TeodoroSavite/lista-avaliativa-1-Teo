#include <stdio.h>
#include <stdlib.h>

int main(){

    long int a;
    long int b;
    long int maior;
    long int menor;

    scanf("%ld %ld", &a, &b);

        maior = (a + b + abs(a-b))/2; 

        if(maior == a){
            menor = b;
        } else if( maior == b){
            menor = a;
        }
        

    if(a == b){
        printf("Os valores lidos sao iguais\n");
        return 0;

    } else if(maior == a){
        printf("%ld eh maior que %ld\n", maior, b);

        } else if(maior == b){
            printf("%ld eh maior que %ld\n", maior, a);

        }else{
            printf("ERRO\n");
        }
        
    if(menor == 0){
        printf("%ld nao eh multiplo de %ld\n", maior, menor);
        return 0;
    } 

    if(maior%menor == 0){
        printf("%ld eh multiplo de %ld\n", maior, menor);

    } else if(maior%menor != 0){
        printf("%ld nao eh multiplo de %ld\n", maior, menor);

    } else{
        printf("ERRO");
    }

   
    
    return 0;
}