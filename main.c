#include <stdio.h>

int main() {

//Variaveis
int dia1, mes1, ano1, dia2, mes2, ano2; 

//Data Inicial
printf("Entre com uma data: \n\n"); 
printf("Dia: ");
scanf("%d",&dia1);
printf("Mes: ");
scanf("%d",&mes1);
printf("Ano: ");
scanf("%d",&ano1);

//Data final
printf("\n\nEntre com outra data: \n\n"); 
printf("Dia: ");
scanf("%d",&dia2);
printf("Mes: ");
scanf("%d",&mes2);       
printf("Ano: ");
scanf("%d",&ano2); 

//Calculando os dias 
int Tdias; 
 Tdias= (dia2 - dia1) + (mes2-mes1)*30 +(ano2-ano1)*365;
printf("a diferença de dias é: %d ", Tdias) ;


  return 0;
}
