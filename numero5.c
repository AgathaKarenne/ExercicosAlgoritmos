#include <stdio.h>

main(){
	float valorDaMercadoria;
	float frete;
	float despesasAdicionais;
	
	printf("Digite o valor de uma mercadoria: \n");
	scanf("%f", &valorDaMercadoria);
	
	printf("Valor da mercadoria\n +%.2f &frete");
	scanf("%.2f", &frete);
	
    printf("Valor da mercadoria\n +%.2f &despesasAdicionais");
	scanf("%.2d", &despesasAdicionais);
	
	printf("Qual sera o valor da venda:\n +%d &valorfinal ");
	scanf("%.2d", &valorDaMercadoria, &frete, &despesasAdicionais);
	
	
	return 0;
}
	

