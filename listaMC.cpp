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
  marca *noMarcaAux = noMarca;

  while (noMarcaAux) {
    if (noMarcaAux->codigo == codigo) {
      return noMarcaAux->nota;
    }
    noMarcaAux = noMarcaAux->prox;
  }

  return 0.0;
}

void inserirC(carro *&noCarro, marca *noMarca) {
  carro *noCarroAux = noCarro;
  carro *novoCarro = (carro*) calloc(1, sizeof(carro));

  printf("\nCódigo da marca: ");
  scanf("%d", &novoCarro->codigomarca);

  if (buscaMarca(noMarca, novoCarro->codigomarca) == 0) {
    printf("\nMarca não cadastrada\n");
    return;
  }

  printf("Modelo: ");
  scanf("%s", novoCarro->modelo);

  printf("Ano: ");
  scanf("%d", &novoCarro->ano);

  if (noCarroAux == NULL) {
    noCarro = novoCarro;
  }
  else {
    while(noCarroAux->prox != NULL) {
      noCarroAux = noCarro->prox;
    }
    noCarroAux->prox = novoCarro;
  }
}

void listagem(marca *noMarca, carro *noCarro) {}

void removerM(marca *&noMarca, carro *noCarro, int codigoMarca) {}

void desalocaMarca(marca *&noMarca) {}

void desalocaCarro(carro *&noCarro) {}
