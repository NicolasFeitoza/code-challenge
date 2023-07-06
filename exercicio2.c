#include <stdio.h>
#include <string.h>
void removerLetrasDuplicadas(char string[]){
	int tamanho=strlen(string)-1;
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
	char string1[]="Hello, how are you?";
	char string2[]="The quick brown fox jumps over the lazy dog.";
	char string3[]="I love programming in C.";
	printf("string 1: %s\n", string1);
	removerLetrasDuplicadas(string1);
	printf("string invertida, mas com as palavras normais: %s\n", string1);
	
	printf("\nstring 2: %s\n", string2);
	removerLetrasDuplicadas(string2);
	printf("string invertida, mas com as palavras normais: %s\n", string2);
	
	printf("\nstring 3: %s\n", string3);
	removerLetrasDuplicadas(string3);
	printf("string invertida, mas com as palavras normais: %s\n", string3);
	
	return 0;
}