#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;       // numero de casos de teste
  int i;       // i é sempre oq eu uso pra fazer o bagui do for
  int o;       // o serve pro scanf doido
  int p;       // p, mais uma variavel pra outro for, caso o ultimo
  int t, temp; // tamanho e dado temporario
  char c[101]; // coisa pra criptografar
  int inicio, fim, metade;

  // scaneando a quantidade de inputs vai ter
  scanf("%d", &n);

  // parte 1, todas as letras maiusculas ou minusculas sao puladas para frente 3
  // vezes.
  for (i = 0; i < n; i++) {
    scanf(" %[^\n]", c);

    for (o = 0; c[o] != '\0'; o++) {
      if (isalpha(c[o])) // detecta se é uma letra
      {
        if (isupper(c[o])) // detecta se é maiusculo
        {
          c[o] = c[o] + 3;        // avança 3 casas do caractere que ta aqui
        } else if (islower(c[o])) // detecta se é minusculo
        {
          c[o] = c[o] + 3;
        }
      }
    }

    // parte 2, inverter a string do inicio ao fim
    t = strlen(c);

    inicio = 0;
    fim = t - 1;

    while (inicio < fim) {
      temp = c[inicio];
      c[inicio] = c[fim];
      c[fim] = temp;

      inicio++;
      fim--;
    }

    // parte 3, da metade pra frente cada valor da string volta 1
    metade = strlen(c) / 2;

    for (p = metade; c[p] != '\0'; p++) {
      c[p] = c[p] - 1;
    }

    printf("%s\n", c);
  }

  return 0;
}