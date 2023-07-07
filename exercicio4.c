#include <stdio.h>
#include <string.h>
#include <ctype.h>
void colocarEmMaiusculo(char string[]) {
	int tamanho=strlen(string);
	string[0]=toupper(string[0]);
	for (int i=1; i<tamanho; i++) {
		if(string[i+1]=='\0') {
			break;	
		} else if (string[i]=='.' || string[i]=='?' || string[i]=='!') {
				string[i+2]=toupper(string[i+2]);
		}
	}
}
int main(void) {
	char string[]="hello. how are you? i'm fine, thank you.";
	printf("string que terá alguns caractéres colocados em maiúsculo: %s\n", string);
	colocarEmMaiusculo(string);
	printf("\nstring com letras de início de período em maiúsculo: %s\n", string);
}