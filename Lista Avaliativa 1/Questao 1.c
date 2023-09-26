#include <stdio.h>

int main(){

int a; 
scanf("%d", &a);


if(a >=1896 && a < 1930 && a%4 == 0){
    printf("Os Jogos Olímpicos de Verão ocorreram no ano de %d.\n", a);

} else if(a > 1930 && a%4 == 0){
    printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", a);

} else if(a >= 1930 && a%2 == 0){
    printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", a);

} else{  
    printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", a);
}

    return 0;
}