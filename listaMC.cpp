#include <stdlib.h>
#include <string.h>

#include "listaMC.h"

void inserirM(marca *&noMarca, int codigo, float nota) {
  marca *noMarcaAux = noMarca;
  printf("Chamou");
  marca *novoNo = (marca *)calloc(1, sizeof(marca));
  novoNo->codigo = codigo;
  novoNo->nota = nota;

  if (noMarca == NULL) {
    noMarca = novoNo;
  } else {
    while (noMarcaAux->prox != NULL) {
      noMarcaAux = noMarcaAux->prox;
    }
    noMarcaAux->prox = novoNo;
  }
}

float buscaMarca(marca *noMarca, int codigo) {}

void inserirC(carro *&noCarro, char *nome, int ano, int codigoMarca) {}

void listagem(marca *noMarca, carro *noCarro) {}

void removerM(marca *&noMarca, carro *noCarro, int codigoMarca) {}

void desalocaMarca(marca *&noMarca) {}

void desalocaCarro(carro *&noCarro) {}
