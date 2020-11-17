#include <stdio.h>

int main(void) {
  int letra;
  FILE *fp;
  //unsigned cont;
  fp=fopen ("fichero.txt", "r");
  if (fp==NULL) {printf("Error en la apertura\n"); return 0;}
  printf("Fichero abierto\n");
  letra=getc (fp);
  putc (letra, stdout);
  fclose (fp);
}