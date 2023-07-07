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
	char string2[]="hello! how are you? i hope you're doing well.";
	char string3[]="i love pizza. do you like it too?";
	char string4[]="estamos indo para a praia! será que vai chover? espero que não.";
	
	printf("string que terá alguns caractéres colocados em maiúsculo: %s\n", string);
	colocarEmMaiusculo(string);
	printf("\nstring com letras de início de período em maiúsculo: %s\n", string);
	printf("\nstring que terá alguns caractéres colocados em maiúsculo: %s\n", string2);
	colocarEmMaiusculo(string2);
	printf("\nstring com letras de início de período em maiúsculo: %s\n", string2);
	printf("\nstring que terá alguns caractéres colocados em maiúsculo: %s\n", string3);
	colocarEmMaiusculo(string3);
	printf("\nstring com letras de início de período em maiúsculo: %s\n", string3);
	printf("\nstring que terá alguns caractéres colocados em maiúsculo: %s\n", string4);
	colocarEmMaiusculo(string4);
	printf("\nstring com letras de início de período em maiúsculo: %s\n", string4);
	return 0;
}