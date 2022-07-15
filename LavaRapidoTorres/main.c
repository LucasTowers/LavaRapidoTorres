#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
 
int main(void) {
 int QdeCarros = 0, OpMenu, indice=0;
 int Patio = 0, Rua = 0, contPatio, contRua;
 struct Tcarro *vetorDeCarros;
 struct Tcarro vetorRua[3];
 struct Tcarro aux;

 printf("Este é o JB Lava-Rápido, seja bem vindo ao mais eficiente e meticuloso lava-rapido de José Bonifácio e região.\n");

 printf("Informe a quantidade de carros que deseja adicionar: ");

 scanf("%d", &QdeCarros);
 vetorDeCarros=(struct Tcarro *) malloc(QdeCarros * sizeof(struct Tcarro)); 

 printf("\nNosso Lava-Rápido suporta %d carros no patio e mais 3 carros podem ser estacionados na rua como fila de espera.\n", QdeCarros);

  do 
  {
    printf("___________________________________________\n\n\n");
    printf("*******************************************");
    printf("\nMenu:");
    printf("\n1) Adicionar carro a fila de lavagem");
    printf("\n2) Lavar o primeiro carro da fila");
    printf("\n3) Consultar a fila de lavagem do patio");
    printf("\n4) Consultar a fila de espera na rua");
    printf("\n5) Encerrar.\n");
    printf("*******************************************\n");
    printf("\nSelecione a opcao desejada do menu: ");
    scanf("\n%d", &OpMenu);
    printf("\nOpçao selecionada: %d\n", OpMenu);

    switch(OpMenu) {
    case 1:
    carroAdd(&Patio, &Rua, QdeCarros, vetorDeCarros, vetorRua);
    break;

    case 2:
    carroLav(&Patio, &Rua, QdeCarros);
    break;

    case 3:
     printf("A fila de lavagem possui %d carros!\n",Patio);
    for (int i  = 0; i < Patio; i++){
      consultFL(vetorDeCarros[i]);
      
    }
      break;

    case 4:
      printf("\nA fila de espera de carros possui %d carros!\n",Rua);
     for (int i  = 0; i < Rua; i++){
      consultFL(vetorRua[i]);  
    }
     
     
      break;

    case 5:
      encerrar();
      
      break;
      }

  }while (OpMenu != 5);

  return 0;
}