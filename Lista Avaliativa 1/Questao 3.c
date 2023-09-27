#include <stdio.h>

int main(){

 int senha;
 scanf("%d", &senha);
 printf("senha cadastrada: %d\n", senha);

 int tentativa;
 scanf("%d", &tentativa);

while(tentativa != senha){
    printf("senha invalida!\n");
    scanf("%d", &tentativa);
}
if(tentativa = senha){
    printf("senha valida!\n");
}

    return 0;
}