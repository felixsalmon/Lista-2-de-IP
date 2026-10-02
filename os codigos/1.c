#include <stdio.h>

#define N 51

int main() {
    char str1[N], str2[N], str3[N * 2];
    int n;
    int i, j, k;

    if (scanf("%d", &n) != 1) return 0;
    
    while (n--) {
        scanf("%s %s", str1, str2);
        
        i = 0;
        j = 0; 
        k = 0;
        
        // Intercala os caracteres enquanto houver em ambas as strings
        while (str1[i] != '\0' && str2[j] != '\0') {
            str3[k++] = str1[i++];
            str3[k++] = str2[j++];
        }
        
        // Se sobrarem caracteres na str1
        while (str1[i] != '\0') {
            str3[k++] = str1[i++];
        }
        
        // Se sobrarem caracteres na str2
        while (str2[j] != '\0') {
            str3[k++] = str2[j++];
        }
        
        // Finaliza a string resultante
        str3[k] = '\0';
        
        printf("%s\n", str3);
    }
    
    return 0;
}