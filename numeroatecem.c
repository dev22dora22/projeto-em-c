#include <stdio.h>

int main() {
  // Faça um programa que imprima todos os números de 1 a 100 usando o laço de repetição for 
  for(int i = 1; i <= 100; i++) {
    printf("%d \n", i);
  }
}

/// usando while

#include <stdio.h>

int main() {
  int numero = 1;
  while(numero <= 100) {
    printf("%d\n ", numero);
    numero++;
  }
}

////Escreva um programa que imprima a soma de todos os números de 1 até 100

#include <stdio.h>

int main() {
  int soma = 0;
  for(int i = 1; i <= 100; i++) {
    soma = soma + i;
  }

  printf("A soma eh %d", soma);
}