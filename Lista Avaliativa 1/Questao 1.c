#include <stdio.h>

int main(){

int a; 
scanf("%d", &a);

switch(a){
        case 1916:
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de 1916.\n");
        return 0;
        break;

        case 1940:
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de 1940.\n");
        return 0;
        break;

        case 1944:
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de 1944.\n");
        return 0;
        break;

        case 1942:
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de 1942.\n");
        return 0;
        break;

        case 1946:
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de 1946.\n");
        return 0;
        break;
}



if(a >=1896 && a < 1930 && a%4 == 0){
    printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", a);

} else if(a > 1930 && a%4 == 0){
    printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", a);

} else if(a >= 1930 && a%2 == 0){
    printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", a);

} else{  
    printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", a);
}

    return 0;
}