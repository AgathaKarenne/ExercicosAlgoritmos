#include <Stdio.h>

 int main(void){
	float valorReal, valorDolar;
	
	printf("Digite o valor em reais que ira ser convertido em dolar: ");
	scanf("%f", &valorReal);
	
	valorDolar = valorReal / 4.88;
	printf("Valor em dolar $%.2f\n", valorDolar);
	
	return 0;
	
	
	
	
	
}
