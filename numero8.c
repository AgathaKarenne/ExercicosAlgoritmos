#include <stdio.h>

main(){
	
	int salarioAtual, reajuste;
	float novoSalario;
	
	printf("Digite o salario atual \n%f");
	scanf("%f",&salarioAtual);
	
	printf("Digite o reajuste: 2");
	scanf("%f", &reajuste);
	
	printf("Calcule o novoSalario \n+400");
	scanf("+400",&novoSalario);
	
	printf("O novo salario e:",novoSalario+salarioAtual,"%")
	
	return 0;
}
