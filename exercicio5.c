#include <stdio.h>
#include <string.h>

// A fim de encontrar um anagrama de um palíndromo, é interessante saber que uma das 
// suas principais características é que ele terá apenas uma letra que aparecerá somente uma vez e
// as outras formarão pares que, quando invertidos, formam um palíndromo

int isAnagramOfPalindrome(char string[]) {
    int letrasRepetidas[26] = {0};
    int letra_unica = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            letrasRepetidas[string[i] - 'a']++;
        } else if (string[i] >= 'A' && string[i] <= 'Z') {
            letrasRepetidas[string[i] - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (letrasRepetidas[i] % 2 != 0) {
            letra_unica++;
        }
    }
    if (letra_unica <= 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char anagrama[] = "racecar";

    if (isAnagramOfPalindrome(anagrama)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
