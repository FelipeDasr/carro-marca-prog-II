#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*tipo para marca */
struct marca
{
      int codigo;
      float  nota;
      struct marca* prox;
};


/*tipo para carro */
struct carro
{
    char modelo[40];
    int ano;
    int codigomarca;
    struct carro *prox;
};

void inserirM(marca *&noMarca, int codigo, float nota);

float buscaMarca(marca *noMarca, int codigo);

void inserirC(carro *&noCarro, char *nome, int ano, int codigoMarca);


void listagem(marca *noMarca, carro *noCarro);


void removerM(marca *&noMarca, carro *noCarro, int codigoMarca);


void desalocaMarca(marca *&noMarca);


void desalocaCarro(carro *&noCarro);


