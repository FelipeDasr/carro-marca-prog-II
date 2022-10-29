#include "listaMC.h"
#include <stdio.h>
#include <stdlib.h>

/*funcao main*/
int main() {

  int op;
  marca *noMarca;
  carro *noCarro;

  do {
    printf("\n1 - Cadastrar uma marca");
    printf("\n2 - Cadastrar um carro");
    printf("\n3 - Listagem de carros");
    printf("\n4 - Exclusao de uma marca");
    printf("\n5 - Sair");
    printf("\nOpcao: ");
    scanf("%d", &op);

    if (op == 1) {
      inserirM(noMarca);
    } 
    
    else if (op == 2) {
      inserirC(noCarro, noMarca);
    } 

    else if (op == 3) {
      listagem(noMarca, noCarro);
    } 
    
    else if (op == 4) {
      removerM(noMarca, noCarro);
    }

  } while (op != 5);

  desalocaCarro(noCarro);
  desalocaMarca(noMarca);

  // desalocar listas

  return 0;
}
