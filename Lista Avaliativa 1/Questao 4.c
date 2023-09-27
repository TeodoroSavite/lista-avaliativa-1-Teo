#include <stdio.h>

int main(){

char nivel;
float salario;
float salarioFinal;

scanf("%c", &nivel);
scanf("%f", &salario);

if(nivel == 'a'){
    salarioFinal = salario + (salario/100 * 5);
    printf("R$ %.2f\n", salarioFinal);

} else if(nivel == 'b'){
    salarioFinal = salario + (salario/100 * 7);
    printf("R$ %.2f\n", salarioFinal);

} else if(nivel == 'c'){
    salarioFinal = salario + (salario/100 * 8);
    printf("R$ %.2f\n", salarioFinal);    
} else{
    printf("ERRO\n");
}


    return 0;
}