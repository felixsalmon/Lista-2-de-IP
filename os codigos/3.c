#include <stdio.h>
#include <string.h>

int main() {
  int qtd;
  int i, tamanho;
  char frase[100000];

  scanf("%d", &qtd);
  getchar(); // isso aqui serve pra engolir o enter

  for (i = 1; i <= qtd; i++) {
    fgets(frase, 100000, stdin);
    tamanho = strlen(frase)
  } 


}