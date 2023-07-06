#include <stdio.h>
#include <string.h>
void inverterPalavrasFrase(char frase[]) {
	int tamanho=strlen(frase);
	int letra_comeco=0;
	int letra_final=tamanho-1;
	while (letra_comeco<letra_final) {
		char letra_atual=frase[letra_comeco];
		frase[letra_comeco]=frase[letra_final];
		frase[letra_final]=letra_atual;
		letra_comeco++;
		letra_final--;
	}
	letra_comeco=0;
	for (int i=0; i<=tamanho; i++) {
		if (frase[i]==' ' || frase[i]=='\0') {
			letra_final=i-1;
			while (letra_comeco<letra_final) {
				char letra_atual=frase[letra_comeco];
				frase[letra_comeco]=frase[letra_final];
				frase[letra_final]=letra_atual;
				letra_comeco++;
				letra_final--;
			}
			letra_comeco=i+1;
		}
	}
}
int main(void) {
	char frase1[]="Hello, how are you?";
	char frase2[]="The quick brown fox jumps over the lazy dog.";
	char frase3[]="I love programming in C.";
	printf("Frase 1: %s\n", frase1);
	inverterPalavrasFrase(frase1);
	printf("Frase invertida, mas com as palavras normais: %s\n", frase1);
	
	printf("\nFrase 2: %s\n", frase2);
	inverterPalavrasFrase(frase2);
	printf("Frase invertida, mas com as palavras normais: %s\n", frase2);
	
	printf("\nFrase 3: %s\n", frase3);
	inverterPalavrasFrase(frase3);
	printf("Frase invertida, mas com as palavras normais: %s\n", frase3);
	
	return 0;
}
