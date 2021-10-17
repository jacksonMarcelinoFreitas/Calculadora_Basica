#include <stdlib.h> 
#include <stdio.h>
#include <locale.h> // --> LOCALE Biblioteca serve para exibir acentuação no texto

//Prototipo da função
void menu();
void soma(float numero1, float numero2);
void subtracao(float numero1, float numero2);
void multiplicacao(float numero1, float numero2);
void divisao(float numero1, float numero2);
void exibirResultado();
void recebeOpcaoMenu(int opcao, float numero1, float numero2);

float resultado; // Variavel GLOBAL

//Main -> A função/método principal do programa
int main() 
{
	setlocale(LC_ALL, "Portuguese"); // --> SETLOCALE serve para exibir acentuação no texto
	menu();
	
	return 0;
}

//VOID não necessita retornar nenhuma valor ao chamar a função
void menu()
{
	int opcao;
	float numero1, numero2;
	do{
		system("cls");
		printf("Bem vindo a calculadora do 1° semestre de Sistemas: ");
		printf("\n\t1 - Soma");
		printf("\n\t2 - Subtração");
		printf("\n\t3 - Multiplicação");
		printf("\n\t4 - Divisão");
		printf("\n\t0 - Sair");
		
		printf("\n\nSelecione a opção desejada: ");
		scanf("%d", &opcao);
		
		if(opcao == 0){
			system("cls");
			printf("Muito obrigado pela preferencia!!");
			break;
		}
		
		printf("\n\nInforme o primeiro valor: ");
		scanf("%f", &numero1);
		printf("Informe o segundo valor: ");
		scanf("%f", &numero2);
		
		recebeOpcaoMenu(opcao, numero1, numero2);
	
	}while(opcao != 0);
}

void recebeOpcaoMenu(int opcao, float numero1, float numero2){
	switch(opcao){
			case 1:
				soma(numero1, numero2);
				break;
			case 2:
				subtracao(numero1, numero2);
				break;
			case 3:
				multiplicacao(numero1, numero2);
				break;
			case 4:
				divisao(numero1, numero2);
				break;
			default:
				printf("\n Digite uma opcao valida!");
				break;
		}
}

void soma(float numero1, float numero2)
{	
	system("cls");
	resultado = numero1 + numero2;
	exibirResultado();
}

void subtracao(float numero1, float numero2)
{
	system("cls");
	resultado = numero1 - numero2;
	exibirResultado();
}

void multiplicacao(float numero1, float numero2)
{
	system("cls");
	resultado = numero1 * numero2;
	exibirResultado();
}

void divisao(float numero1, float numero2)
{
	system("cls");
	resultado = numero1 / numero2;
	exibirResultado();	
}

void exibirResultado(){
	printf("O resultado é: %.2f\n\n", resultado);
	system("pause");
}


