#include <stdio.h>

main(){
	
	int anos, meses, dias;
	
	printf("Digite a idade da pessoa em anos: \n%.2d");
	scanf("%d",&anos);
	
	printf("Digite a idade da pessoa em meses: \n%.2d");
	scanf("%d", &meses);
	
	printf("Digite a idade da pessoa em dias: \n%.2d");
	scanf("%d", &dias);
	
	int idadeEmDias = (anos * 365) + (meses * 30) + dias;
	
	printf("a idade da pessoa em dias e: %d\n", idadeEmDias);
	
	return 0;
	
}
