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
	char frase[]="Hello, World! OpenAI is amazing.";
	inverterPalavrasFrase(frase);
	printf("Frase invertida, mas com as palavras normais: %s\n", frase);
	return 0;
}
