#include<stdio.h>

int main() {

  int num1, num2, soma, sub, mult, div;

  printf("Digite dois numeros inteiros");
  scanf("%d %d", &num1, &num2);

  soma = num1 + num2;
  sub = num1 - num2;
  mult = num1 * num2;
  div = num1 / num2;

  printf("\nResultado soma: %d", soma);
  printf("\nResultado sub %d", sub);
  printf("\nResultado mult %d", mult);
  printf("\nResultado div %.2f", div);
}