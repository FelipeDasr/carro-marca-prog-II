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

void inserirM(marca *&noMarca);

float buscaMarca(marca *noMarca, int codigo);

void inserirC(carro *&noCarro, marca *noMarca);


void listagem(marca *noMarca, carro *noCarro);


void removerM(marca *&noMarca, carro *noCarro);


void desalocaMarca(marca *&noMarca);


void desalocaCarro(carro *&noCarro);


