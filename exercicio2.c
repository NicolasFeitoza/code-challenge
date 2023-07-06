#include <stdio.h>
#include <string.h>
void removerLetrasDuplicadas(char string[]){
	int tamanho=strlen(string)-1;
	for (int i=0; i<tamanho; i++) {
		for(int j=i+1; string[j]!='\0'; j++) {
			if (string[i]==string[j]) {
				for (int k=j; string[k]!='\0'; k++) {
					string[k]=string[k+1];
				}
				tamanho--;
				j--;
			}
		}
	}
}
int main(void) {
	char string[]="Hello, World!";
	printf("String que terá seus caractéres duplicados removidos: %s\n", string);
	removerLetrasDuplicadas(string);
	printf("String sem os caractéres duplicados: %s\n", string);
	return 0;
}