#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");
    float projetos[10];
    int i;

    struct{
    int numero;
    float valor;
    char tipo;
    } boleto;

    // Inicializando o vetor
    for (i=0; i < 10; i++){
    projetos[i] = 0.0;
    }

    printf("Digite o código do projeto: ");
    scanf("%d", &boleto.numero);

    while (boleto.numero != -1) {
    printf("\n\nDigite o Valor : ");
    scanf("%f", &boleto.valor);
    printf("\n\nDigite o tipo de transação (R ou D): ");
    getchar();//limpar o teclado do Enter anterior
    scanf("%c", &boleto.tipo);

    if (boleto.tipo == 'R' || boleto.tipo == 'r') {
      projetos[boleto.numero] = projetos[boleto.numero] + boleto.valor;
    } else {
    if (boleto.tipo == 'D' || boleto.tipo == 'd') {
      projetos[boleto.numero] = projetos[boleto.numero] - boleto.valor;
    } else {
      printf("Tipo Inválido!");
    }
   }

    printf("\n\nDigite o código do projeto: ");
    scanf("%d", &boleto.numero);
  }

    for (i=0; i < 10; i++){
    printf("\nSaldo do projeto %d = %f",i, projetos[i]);
    }
    return 0;
}
