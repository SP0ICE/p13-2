
#include <stdio.h>
int main() {
FILE *fOut;
int a = 123;
fOut = fopen ("output.txt", "w");
  printf("Test v13.01: OK ");
  fprintf(fOut, "%d\n", a);
fclose(fOut);      
 return 0;
}
