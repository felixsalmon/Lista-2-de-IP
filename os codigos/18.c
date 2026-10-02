#include <stdio.h>

int main() {
  int c;
  int b, e, b2, e2;
  int i;

  scanf("%d", &c);

  for (i = 0; i < c; i++) {

    scanf("%d %d", &b, &e);

    b2 = b;
    e2 = e;

    while (b <= e) {
      printf("%d", b);
      b++;
    }
    if (b > e) {
      b--;
    }
    while (b >= b2) {
      printf("%d", b);
      b--;
    }
    printf("\n");
  }
}