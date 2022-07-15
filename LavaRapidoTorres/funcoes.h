#include <stdio.h>

struct Tcarro {
  char modelo[20];
  char placa[9];
  char dono[20];
};

void flush_in(){
  int ch;
  while( (ch= fgetc(stdin)) != EOF && ch != '\n'){} 
 
 }
struct Tcarro criaCarro(){
  struct Tcarro aux;
    flush_in();
     printf(" \nDigite o nome do dono do carro: ");
     fgets (aux.dono,19,stdin);
     printf ("Digite placa do carro: ");
     fgets (aux.placa,8,stdin);
     printf ("Digite o  modelo do carro: ");
     fgets (aux.modelo,19,stdin);
     return aux;
 }

void carroAdd(int *p , int *rua, int QdeCarros, struct Tcarro vPatio[], struct Tcarro vRua[]){

  if(*p < QdeCarros) {
    vPatio[*p] = criaCarro();
    printf("\nAdicionando um carro ao patio\n");
  *p =  *p +  1 ; 
  }  
  else  if  ( *rua <  3 )  {
    vRua [*rua]  = criaCarro ( ) ;
    printf ( "\nPatio cheio! Adicionando um carro a rua\n" ) ;
    *rua =  *rua +  1 ;
  }
  else  {
    printf ( "\nPatio e rua estao cheios\n" ) ;
  }
}

void carroLav(int *p , int *rua, int QdeCarros)
{
  if(*p > 0)
  {
    *p = *p - 1;
    printf("\nCarro do patio limpo\n");
  }else{
    if(*rua > 0) {
      *rua = *rua - 1;
      printf("\nCarro da rua limpo\n");
    }else{
      printf("\nPatio e rua vazios\n");
    }
}
}

void consultFL(struct Tcarro aux){
  printf("\n--------------------------\n");
  printf("Nome do dono: %s\n", aux.dono);
  printf("Modelo do carro: %s\n", aux.modelo);
  printf("Placa do carro: %s", aux.placa);
  printf("--------------------------\n");
  
};
void consultFE(){
  printf("Entrou na funcao consultFE\n");
 
 
};
void encerrar(){
 printf("O programa foi encerrado!");
};