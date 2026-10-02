#include <stdio.h>
#include <string.h>

int main() {
  int a, l; // altura e largura
  int i, j;
  int n1, n2;
  int c;

  c = 1;
  n1 = 0;

  scanf("%d %d", &a, &l);

  for (i = 0; i < a; i++) {
    for (j = 0; j < l; j++) {
      if ((i + j) % 2 == 0) {
        printf("0 ");
      } else {
        printf("%d ", c);
        c++;
      }
    }
    printf("\n");
  }

  return 0;
}