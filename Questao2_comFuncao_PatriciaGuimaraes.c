#include <stdio.h>
#include <conio.h>
#include <ctype.h>


typedef struct alunos{// ou sem a palavra typedef retirando tb agendaApelido
	char nome[30];
	int idade;//tamanho que cada string tem para digitar os dados.
} alunos;

int main(){
	alunos dadosAlunos[10];
	int i = 0, qtde;
	char continuar;

	preencherDados(dadosAlunos);
	
	printf("-------DADOS DOS ALUNOS-------");
	
	for(i=0; i<10; i++){
		printf("\n%d%c aluno: %s ", i+1, 167, dadosAlunos[i]. nome);
		printf("Idade: %d\n", i+1, 167, dadosAlunos[i].idade);
	}

	return 0;	
}
void preencherDados(alunos *dadosAlunos){
	int i; 
	
	printf("-----Preenchimento dos Dados-----\n");
		
	for(i=0; i<10; i++){
	printf("Digite o nome do %d%c aluno: \n", i+1, 167);
	fgets(dadosAlunos[i].nome, 30, stdin);
	fflush (stdin);
	printf("Digite a idade do %d%c aluno: \n", i+1, 167);
	scanf("%d", &dadosAlunos[i].idade);
	fflush (stdin);
	}

}
