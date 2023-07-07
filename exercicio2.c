#include <stdio.h>
#include <string.h>
void removerLetrasDuplicadas(char string[]){
	int tamanho=strlen(string);
	for (int i=0; i<tamanho; i++) {
		for(int j=i+1; string[j]!='\0'; j++) {
			if (string[i]==string[j] && string[i]!=' ' && string[j]!=' ') {
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
	removerLetrasDuplicadas(string);
	printf("%s\n", string);
	return 0;
}