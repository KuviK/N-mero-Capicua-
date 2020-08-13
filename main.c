#include <stdio.h>
#include <stdlib.h>

/* Função: aplicação que encontra o maior número capicua resultante do produto entre dois algarismos de três dígitos.
   Autor:  Luís Filipe */

int main(int argc, char *argv[]) {
	
	//Declarar Variaveis
	int numero, i,j,inverso,z,maxCapicua;
	
	//Limpar ecrã
	system("cls");
	
	//Inicizaliar Variaveis
	maxCapicua = 0;
	
	//Calculo do numero capicua
	for (i = 100; i < 1000; i++) // i = 100 porque era pretendido encontrar o maior capicua resultante do produto entre 2 algarismos de 3 dígitos
	{
		for (j = i; j < 1000; j++)
		{
			numero = i * j; // a variavel numero fica com valor do produto que resulta da multiplicação de i com j que contem os valores 100 e 101 respetivamente.
			inverso = 0; //Inicicializar a 0 para que a cada iteração o valor seja 0
			
			//Calcular o inverso do numero
			for (z = numero; z > 0; z /= 10) // z /= 10 guarda o valor do numero sem o ultimo algarismo.
			{
                inverso = inverso * 10 + z % 10; // z % 10 é o calculo do resto de forma a isolar o ultimo algarismo do numero, multiplicando inverso por 10 e somando o ultimo algarismo obtemos o numero invertido.
            }
			
			//se for capicua e for o maior capicua possivel guarda esse numero
			if (numero == inverso && inverso > maxCapicua)  
			{
                    maxCapicua = numero;
            }

		}
	}
	
	//Apresentar o maior capicua ao utilizador
	printf("O maior numero capicua e: %d", maxCapicua);
	
	//pausa
	getchar();
	
}
