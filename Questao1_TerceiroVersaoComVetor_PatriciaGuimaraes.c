//1. Desenvolva um programa em C utilizando registro que permita a entrada de nome, 
//endereço e telefone de 3 pessoas e os imprima ao final.

typedef struct agenda{
	char nome[20], endereco[100], telefone[10];
} agendaApelido;
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	agendaApelido pessoas[3];//declaração do vetor
	int i = 0;
	setlocale(LC_ALL, "portuguese");
	
	for(i=0; i<3; i++){
		printf("\nDigite o nome: ");
		fgets(pessoas[i].nome, 20, stdin); 
		fflush(stdin);
		printf("\nDigite o endereco: ");
		fgets(pessoas[i].endereco, 100, stdin);
		fflush(stdin);
		printf("\nDigite o telefone: ");
		scanf("%s", &pessoas[i].telefone);
		fflush(stdin);		
	
	}
	system("cls");
	for(i=0; i<3; i++){
		printf("\n%i%ª Pessoa: \n", i+1);
		printf("\tNome: %s", pessoas[i].nome);
		printf("\tEndereco: %s", pessoas[i].endereco);
		printf("\tTelefone: %s", pessoas[i].telefone);
	}

	return 0;
}
