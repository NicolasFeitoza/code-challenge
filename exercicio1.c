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
}
int main(void) {
	char frase[]="Hello, World! OpenAI is amazing.";
	printf("Frase a ser invertida: %s\n", frase);
	inverterPalavrasFrase(frase);
	printf("Frase com as letras invertidas: %s\n", frase);
	return 0;
}
