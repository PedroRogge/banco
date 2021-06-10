#include<stdio.h>
#include<stdlib.h>


struct conta{
	char nome[100]; 
	float cc;
	float pp;
	
};

void main()
{
	int op=100;
	struct conta conta;
	conta.pp=0;
	float aux;
	char nomeConta[100];
	
	printf("Digite seu nome: ");
	scanf("%100[^\n]s",&conta.nome);
	printf("\nDigite o saldo atual da sua conta: ");
	scanf("%f",&conta.cc);
	printf("\npressione enter para apresentar o menu\n");
	system("pause");// comando para da pause na tela
	
	//PROXIMA SESSAO SERA DE MENU
	while(op!=0)
	{
		system("cls");
		printf("Ola Sr(a) %s\n",conta.nome);
		printf("\t##MENU##\n");
		printf("[1] - Saque\n");
		printf("[2] - Deposito\n");
		printf("[3] - Verificar saldo\n");
		printf("[4] - Lista de Transações\n");
		printf("[5]- sair\n");
		printf("DIGITE UMA OPCAO: \n");
		scanf("%d",&op);
		
		//SWITCH DE OPÇÃO!
		switch(op)
		{
			// operação de saque
			case 1:
				{
					printf("Digite o valor que do saque : ");
					scanf("%f",&aux);
					if(conta.cc>0 && conta.cc>=aux)
					{
						conta.cc=conta.cc-aux;
						printf("Saque realizado com sucesso\n");
					}
					else 
						printf("Saldo insuficiente para saque\n");
					system("pause");
				}break;
			
			//operação de deposito	
			case 2:
				{
					printf("Digite o valor para deposito: ");
					scanf("%f",&aux);
					if(aux>0)
					{
						conta.cc=conta.cc+aux;
						printf("\nDeposito realizado com sucesso\n");
						system("pause");
					}
					else
						printf("Impossivel depositar valor abaixo de 0");
				}break;
				
					
				//mostra saldo na conta 
				case 3:
					{
						printf("Sr(a) %s, o seu saldo atual da conta : %2.f\n",conta.nome,conta.cc);
						system("pause");
					}break;
					
					
		}
	}
}
