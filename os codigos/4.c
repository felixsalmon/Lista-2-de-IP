#include <stdio.h>
#include <string.h>

int main() {
  int valor, qtd;
  char num[20];

  scanf("%d", &qtd);
  for (valor = 1; valor <= qtd; valor++) {
    scanf("%s", num);
    int tamanho = strlen(num);

    if (tamanho == 3) {
      if ((num[0] == 'o' && num[1] == 'n') ||
          (num[0] == 'o' && num[2] == 'e') ||
          (num[1] == 'n' && num[2] == 'e')) {
        printf("1\n");
      } else if ((num[0] == 't' && num[1] == 'w') ||
                 (num[0] == 't' && num[2] == 'o') ||
                 (num[1] == 'w' && num[2] == 'o')) {
        printf("2\n");
      }
    } else if (tamanho == 5) {
      printf("3\n");
    }
  }
  return 0;

  // strlen(NOME) é usando para somente caracteres, entao cuidado ai
}