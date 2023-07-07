#include <stdio.h>
#include <string.h>
void encontrarPalindromo(char string[]) {
	int tamanho=strlen(string);
	int maiorSubString=0;
	int inicio_maiorSubString=0;
	int comeco, fim, tamanhoSubStr;
	for (int i=0; i<tamanho; i++) {
		for (int j=i+1; j<tamanho; j++) {
			if (string[i]==string[j]) {
				comeco=i;
				fim=j;
				tamanhoSubStr=j-i+1;
				if (tamanhoSubStr>maiorSubString) {
					maiorSubString=tamanhoSubStr;
					inicio_maiorSubString=comeco;
				}
			}
		}
	}
	printf("Substring palíndroma mais longa: ");
	for (int i=inicio_maiorSubString; i<inicio_maiorSubString+maiorSubString; i++) {
		printf("%c", string[i]);
	}
}
int main(void) {
	char string[]="babad";
	printf("String que será verificado se há uma substring palíndroma: %s\n", string);
	encontrarPalindromo(string);
	return 0;
}