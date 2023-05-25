#include <stdio.h>
#include <string.h>

// Definição das estruturas
typedef struct {
    char nome[50];
    int funcional;
    char titulacao[20];
} Professor;

typedef struct {
    char nome[50];
    int codigo;
    int carga_horaria;
    Professor professor_responsavel;
} Disciplina;

typedef struct {
    char nome[50];
    int matricula;
    int idade;
} Estudante;

// Protótipos das funções
void bubbleSort(Estudante *estudantes, int tamanho);
int le_valida_idade(int idade);

int main() {
    // Criação dos professores
    Professor professor1 = {"João Silva", 123, "mestre"};
    Professor professor2 = {"Maria Santos", 456, "especialista"};
    Professor professor3 = {"Pedro Oliveira", 789, "doutor"};

    // Criação das disciplinas
    Disciplina disciplina1 = {"Matemática", 1, 60, professor1};
    Disciplina disciplina2 = {"História", 2, 40, professor2};

    // Criação dos estudantes
    Estudante estudantes[15];
    int numEstudantes = 0;

    // Cadastro dos estudantes na disciplina 1 (Matemática)
    strcpy(estudantes[numEstudantes].nome, "Ana Souza");
    estudantes[numEstudantes].matricula = 1001;
    estudantes[numEstudantes].idade = 20;
    numEstudantes++;

    strcpy(estudantes[numEstudantes].nome, "Carlos Oliveira");
    estudantes[numEstudantes].matricula = 1002;
    estudantes[numEstudantes].idade = 18;
    numEstudantes++;

    // Cadastro dos estudantes na disciplina 2 (História)
    strcpy(estudantes[numEstudantes].nome, "Pedro Silva");
    estudantes[numEstudantes].matricula = 2001;
    estudantes[numEstudantes].idade = 22;
    numEstudantes++;

    strcpy(estudantes[numEstudantes].nome, "Mariana Santos");
    estudantes[numEstudantes].matricula = 2002;
    estudantes[numEstudantes].idade = 25;
    numEstudantes++;

    // Ordenação dos estudantes na disciplina 1 por idade (ordem crescente)
    bubbleSort(estudantes, numEstudantes);

    // Relatório dos alunos matriculados na disciplina 1 ordenados por idade
    printf("Relatório dos alunos matriculados na disciplina 1 (Matemática) ordenados por idade:\n");
    printf("Código da disciplina: %d\n", disciplina1.codigo);
    printf("Nome do professor: %s\n", disciplina1.professor_responsavel.nome);
    for (int i = 0; i < numEstudantes; i++) {
        printf("Nome do estudante: %s\n", estudantes[i].nome);
        printf("Idade do estudante: %d\n", estudantes[i].idade);
    }

    // Ordenação dos estudantes na disciplina 2 por idade (ordem decrescente)
    bubbleSort(estudantes, numEstudantes);

    // Relatório dos alunos matriculados na disciplina 2 ordenados por idade em ordem decrescente
