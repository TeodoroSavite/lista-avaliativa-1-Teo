#include <stdio.h>

int main(){

 long int  a;
 int soma = 0;
 int n;
 

 scanf("%ld", &a);
 long int x = a;

 if(a%2 != 0){
 printf("%ld eh impar\n", a);

 while(a > 0){
        n = a%10;
        soma = soma + n;
        a = a/10;

 } 

 printf("A soma dos algarismos de %ld eh igual a %d\n", x, soma);

 } else {
    printf("%ld eh par\n", a);

     while(a > 0){
        n = a%10;
        soma = soma + n;
        a = a/10;
 } 

 printf("A soma dos algarismos de %ld eh igual a %d\n", x, soma);

 }


    return 0;
}