#include <stdio.h>

int main() {
  int n, i, p, total;
  int um, dois, tres, quatro, cinco, seis, sete, oito, nove, zero;
  char num[101];

  um = 2;
  dois = 5;
  tres = 5;
  quatro = 4;
  cinco = 5;
  seis = 6;
  sete = 3;
  oito = 7;
  nove = 6;
  zero = 6;

  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    total = 0;
    p = 0; // a posição do primeiro numero fica no zero, e não no 1.
    scanf("%s", num);
    while (num[p] != '\0') {
      if (num[p] == '1') {
        total = total + um;
      } else if (num[p] == '2') {
        total = total + dois;
      } else if (num[p] == '3') {
        total = total + tres;
      } else if (num[p] == '4') {
        total = total + quatro;
      } else if (num[p] == '5') {
        total = total + cinco;
      } else if (num[p] == '6') {
        total = total + seis;
      } else if (num[p] == '7') {
        total = total + sete;
      } else if (num[p] == '8') {
        total = total + oito;
      } else if (num[p] == '9') {
        total = total + nove;
      } else if (num[p] == '0') {
        total = total + zero;
      }
      p++;
    }
    printf("%d leds\n", total);
  }

  return 0;
}