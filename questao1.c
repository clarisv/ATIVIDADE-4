#include<stdio.h>
#include<math.h>

main(){

//Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo

double raizQuadrada, numero;

printf("Digite um numero: ");
scanf("%lf", &numero);

raizQuadrada = sqrt(numero);

printf("A raiz quadrada de %.2lf e: %.2lf\n", numero, raizQuadrada);


if (numero >= 0) {
        
       
printf("A raiz quadrada e positiva\n");


}else if(numero != 0){

printf("A raiz quadrada e negativa\n");


}



return 0;

}