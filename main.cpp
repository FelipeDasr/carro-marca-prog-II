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
      int codigo;
      float nota;

      scanf("%d %f", &codigo, &nota);
      inserirM(noMarca, codigo, nota);
    } else if (op == 2) {

      int codigoMarca;
      int ano;
      char nome[40];

      scanf("%d %s %d", &codigoMarca, nome, &ano);
      inserirC(noCarro, nome, ano, codigoMarca);

    } else if (op == 3) {

    } else if (op == 4) {
    }

  } while (op != 5);

  // desalocar listas

  return 0;
}
