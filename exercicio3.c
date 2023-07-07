#include <stdio.h>
#include <string.h>

void encontrarPalindromo(char string[]) {
  int tamanho=strlen(string);
  int maiorSubString=0;
  int inicio_maiorSubString=0;
  int segundoMaiorSubString=0;
  int inicio_segundoMaiorSubString=0;
  for (int i=0; i<tamanho; i++) {
    for (int j = i + 1; j < tamanho; j++) {
      if (string[i]==string[j]) {
        int comeco=i;
        int fim=j;
        int tamanhoSubStr=j-i+1;
        if (tamanhoSubStr>maiorSubString) {
          segundoMaiorSubString=maiorSubString;
          inicio_segundoMaiorSubString=inicio_maiorSubString;
          maiorSubString=tamanhoSubStr;
          inicio_maiorSubString=comeco;
        } else if (tamanhoSubStr>segundoMaiorSubString && tamanhoSubStr<maiorSubString) {
          segundoMaiorSubString=tamanhoSubStr;
          inicio_segundoMaiorSubString=comeco;
        }
      }
    }
  }
  if (maiorSubString==tamanho) {
    if (segundoMaiorSubString!=0) {
      for (int i=inicio_segundoMaiorSubString; i<inicio_segundoMaiorSubString+segundoMaiorSubString; i++) {
        printf("%c", string[i]);
      }
      printf("\n");
    } else {
      printf("Nao há substring palindroma");
    }
  } else {
        for (int i=inicio_maiorSubString; i<inicio_maiorSubString+maiorSubString; i++) {
            printf("%c", string[i]);
        }
        printf("\n");
  }
}
int main(void) {
    char string1[]="babad";
    encontrarPalindromo(string1);
	return 0;
	
}
