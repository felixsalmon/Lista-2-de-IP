#include <stdio.h>
#include <string.h>

int main() {
  int num1, num2;
  int resultado;
  int i, tamanho;
  char legal[10];

  while (1) {
    scanf("%d %d", &num1, &num2);

    if (num1 == 0 && num2 == 0) {
      break;
    } else {
      resultado = num1 + num2;
      sprintf(legal, "%d", resultado);

      tamanho = strlen(legal);

      for (i = 0; i < tamanho; i++) {

        if (legal[i] != '0') {
          printf("%c", legal[i]);
        }
      }
      printf("\n");
    }
  }

  return 0;
}