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
      printf("substring: ");
      for (int i=inicio_segundoMaiorSubString; i<inicio_segundoMaiorSubString+segundoMaiorSubString; i++) {
        printf("%c", string[i]);
      }
      printf("\n");
    } else {
      printf("Nao e um palindromo");
    }
  } else {
        printf("Maior substring: ");
        for (int i=inicio_maiorSubString; i<inicio_maiorSubString+maiorSubString; i++) {
            printf("%c", string[i]);
        }
        printf("\n");
  }
}
int main(void) {
    char string1[]="babad";
	char string2[]="aibofobia";
	char string3[]="omississimo";
	char string4[]="sopapos";
	
    printf("String que será verificada se há uma substring palindrômica: %s\n", string1);
    encontrarPalindromo(string1);
   
	printf("string 1 que será verificada se há uma substring palindrômica: %s\n", string2);
	encontrarPalindromo(string2);
	
	
	printf("\nstring 2 que será verificada se há uma substring palindrômica: %s\n", string3);
	encontrarPalindromo(string3);
	
	
	printf("\nstring 3 que será verificada se há uma substring palindrômica: %s\n", string4);
	encontrarPalindromo(string4);
	
	
	return 0;
}
