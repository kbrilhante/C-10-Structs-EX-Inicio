#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/*** EXERCICIO STRUCTS ***/

/*
	DESAFIO ÚNICO: Crie um sistema que gerencia os dados de uma escola.
		+-------------+-----------------------+
		| Aluno       | Notas                 |
		+-------------+-----------------------+
		| 'Abigail'   | [3.8, 3.2, 6.4, 5.7]  |
		| 'Amanda'    | [6.9, 8.0, 6.4, 8.5]  |
		| 'Daniel'    | [10.0, 9.3, 8.3, 7.0] |
		| 'Emily'     | [8.5, 9.0, 8.7, 7.0]  |
		| 'Isabella'  | [9.0, 6.1, 7.9, 10.0] |
		| 'Olivia'    | [9.7, 10.0, 8.9, 8.8] |
		| 'Samuel'    | [5.5, 7.5, 7.9, 4.1]  |
		| 'Sarah'     | [8.9, 9.9, 8.1, 9.6]  |
		| 'William'   | [7.6, 7.0, 7.6, 10.0] |
		+-------------+-----------------------+
	O que precisa ser feito:
	- Cadastro de alunos:
			Cada aluno deve ser cadastrado com suas notas e a sua média.
			Também precisa ter um conceito de
			'A' (aprovado) - acima de 7
			'P' (prova de recuperação) - abaixo de 7 e a partir de 5
			'R' (reprovado) - abaixo de 5
	- Listar os alunos
	- Ficha do aluno

	Todas as funcionalidades precisam estar em um menu
*/
const char NOMES[9][11] = {"Abigail", "Amanda", "Daniel", "Emily",  "Isabella",
									 "Olivia",  "Samuel", "Sarah",  "William"};
const float NOTAS[9][4] = {
		{3.8, 3.2, 6.4, 5.7}, {6.9, 8.0, 6.4, 8.5},  {10.0, 9.3, 8.3, 7.0},
		{8.5, 9.0, 8.7, 7.0}, {9.0, 6.1, 7.9, 10.0}, {9.7, 10.0, 8.9, 8.8},
		{5.5, 7.5, 7.9, 4.1}, {8.9, 9.9, 8.1, 9.6},  {7.6, 7.0, 7.6, 10.0}
};
int main(int argc, char **argv)
{
	printf("");
    getchar();
	return 0;
}
#endif
