

int main() {
  int num1, num2, num3, soma, subtracao, multiplicacao;
  printf("digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("digite o segundo numero: ");
  scanf("%d", &num2);
  printf("digite o terceiro numero:");
  scanf("%d", &num3);
  soma = num1 + num2 + num3;
  subtracao = num1 - num2 - num3;
  multiplicacao = num1 * num2 * num3;
    printf("A soma dos números %d, %d e %d é: %d\n", num1, num2, num3, soma);
    printf("A subtração dos números %d, %d e %d é: %d\n", num1, num2, num3, subtracao);
    printf("A multiplicação dos números %d, %d e %d é: %d\n", num1, num2, num3,multiplicacao);
  return 0;
} 
