//6. Definir a estrutura cuja representação gráfica é dada a seguir, definir os campos com 
//os tipos básicos necessários.
#include <stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
//prof Não consegui terminar essa questão. Mas vou postar no moodle assim e no Github postarei corretamente.
typedef struct endereco{
	char rua[50], bairro[20], cidade[30], estado[15], cep[8];
}end;

typedef struct cadastro{
	char nome[30], identidade[15], cpf[11], estadoCivil[10];
	char telefone[12], sexo[10];
	float salario;
	int idade;
	end endereco;
}dados;

void maiorIdade(dados *cadastro, int ind);
void totalSexoMasculino(dados *cadastro, int ind);

int main(){
	dados cadastro[5];
	int i;
	
	for(i=0; i<5; i++){
		printf("\nInforme o nome %i: ", i+1);
		fflush(stdin);
		fgets(cadastro[i].nome, 30, stdin);
		printf("\nInforme o endereco do nome %i ", i+1);
		printf("\nRua: ");
		fflush(stdin);
		fgets(cadastro[i].endereco.rua, 50, stdin);
		printf("\nBairro: ");
		fflush(stdin);
		fgets(cadastro[i].endereco.bairro, 20, stdin);	
		printf("Cidade: ");
		fflush(stdin);
		fgets(cadastro[i].endereco.cidade, 30, stdin);	
		printf("\nEstado (Abreviacao com 2 letras): ");
		fflush(stdin);
		fgets(cadastro[i].endereco.estado, 15, stdin);		
		printf("\nCEP: ");
		fflush(stdin);
		scanf("%i", &cadastro[i].endereco.cep);
		printf("Salario R$: ");
		fflush(stdin);
		scanf("%f", &cadastro[i].salario);	
		printf("Numero da Identidade: ");
		fflush(stdin);
		fgets(cadastro[i].identidade, 15, stdin);
		printf("Numero do CPF: ");
		fflush(stdin);
		fgets(cadastro[i].cpf, 11, stdin);	
		printf("Estado Civil: ");
		fflush(stdin);
		fgets(cadastro[i].estadoCivil, 10, stdin);	
		printf("Telefone (xx.xxxx.xxxx) - os dois primeiros x informe DDD: ");
		fflush(stdin);
		fgets(cadastro[i].telefone, 12, stdin);	
		printf("\nIdade: ");
		fflush(stdin);
		scanf("%i", &cadastro[i].idade);
		printf("Sexo: ");
		fflush(stdin);
		fgets(cadastro[i].sexo, 10, stdin);								
	}
	
	maiorIdade(cadastro,i);
	totalSexoMasculino(cadastro,i);
	
}

void maiorIdade(dados *cadastro, int ind){
	int i, idMaior = cadastro[0].idade;
	for(i=0;i<ind; i++){
		if(idMaior > cadastro[ind].idade){
	idMaior = cadastro[ind].idade;
		}
	}
	printf("\nA pessoa mais velha tem a idade de %i\n ", idMaior);
}
void totalSexoMasculino(dados *cadastro, int ind){
	int i;
	int totalMasc = 0;
	for(i=0; i<ind; i++){
		if(cadastro[ind].sexo == cadastro[i].sexo){
			totalMasc = ind;

		}
		printf("Total de homens = %i", totalMasc);
	}
}
