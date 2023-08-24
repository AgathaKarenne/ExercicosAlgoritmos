#include <stdio.h>

main(){
float numero;
  
printf("Digite um numero: \n");
scanf("%f", &numero);

float dobro = numero * 2;

printf("O dobro de %.2f e %.2f\n", numero, dobro);
  
return 0;
  
}
