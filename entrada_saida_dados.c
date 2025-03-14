#include <stdio.h>

int main() {
    int idade;
    float altura;
    double saldoBancario;
    char inicial;
    char nome[20];
 
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Idade: %d anos\n", idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Altura: %.2f metros\n", altura);
    printf("Digite seu saldo bancário: ");
    scanf("%f", &saldoBancario);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Digite sua inicial: ");
    scanf(" %c", &inicial);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Nome: %s\n", nome);
    
 
    return 0;
}


// %d: Imprime um inteiro no formato decimal.
 
// %i: Equivalente a %d.
 
// %f: Imprime um número de ponto flutuante no formato padrão.
 
// %e: Imprime um número de ponto flutuante na notação científica.
 
// %c: Imprime um único caractere.
 
// %s: Imprime uma cadeia (string) de caracteres.
