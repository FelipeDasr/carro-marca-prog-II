#include <stdlib.h>
#include <string.h>

#include "listaMC.h"

void inserirM(marca *&noMarca) {
  marca *noMarcaAux = noMarca;
  marca *novoNo = (marca *)calloc(1, sizeof(marca));

  printf("\nCódigo: ");
  scanf("%d", &novoNo->codigo);

  printf("Nota: ");
  scanf("%f", &novoNo->nota);

  if (noMarca == NULL) {
    noMarca = novoNo;
  } else {
    while (noMarcaAux->prox != NULL) {
      noMarcaAux = noMarcaAux->prox;
    }
    noMarcaAux->prox = novoNo;
  }
}

float buscaMarca(marca *noMarca, int codigo) {
  return 0.0;
}

void inserirC(carro *&noCarro, char *nome, int ano, int codigoMarca) {}

void listagem(marca *noMarca, carro *noCarro) {}

void removerM(marca *&noMarca, carro *noCarro, int codigoMarca) {}

void desalocaMarca(marca *&noMarca) {}

void desalocaCarro(carro *&noCarro) {}
