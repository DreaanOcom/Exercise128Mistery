#include <stdio.h>

void inputNumeri (float *numero1, float *numero2);
void menu (unsigned int *scelta);
float operazione (unsigned int scelta, float numero1, float numero2);

int main(void) {
  unsigned int scelta;
  float num1;
  float num2;
  
  printf("Il seguente programma permette di fare operazioni aritmetiche su due numeri.\n");
  do {
    menu(&scelta);
    if (scelta < 5) {
      inputNumeri(&num1, &num2);
      operazione(scelta, num1, num2);
      printf("Il risultato è: %f\n", operazione);
    }
  } while (scelta != 5);

  printf("Grazie per aver usato questa calcolatrice\n");
  return 0;
}

void inputNumeri (float *numero1, float *numero2) {
  printf("Inserire il primo numero: ");
  scanf("%f", numero1);
  printf("Inserire il secondo numero: ");
  scanf("%f", numero2);
}

void menu (unsigned int *scelta) {
  printf("Selezionare una delle seguenti voci:\n1)Somma\n2)Sottrazione\n3)Moltiplicazione\n4)Divisione\n5)Esci\n");
  scanf("%x", scelta);
  while (*scelta > 5) {
    printf("Scelta non valida, reinseriscilo: ");
    scanf("%d", scelta);
  }
}

float operazione (unsigned int scelta, float numero1, float numero2) {
  switch (scelta) {
    case 1:
      numero1 = numero1 + numero2;
      break;
    case 2:
      numero1 = numero1 - numero2;
      break;
    case 3:
      numero1 = numero1 * numero2;
      break;
    case 4:
      numero1 = numero1 / numero2;  
      break;
  }
 // printf("%f\n", numero1);
  return numero1;
}
