#include <stdio.h>

int main() {

    int A,B,C,D,E,F;
  A = 5;
  C = 0;
  D = 0;
  E = 0;
  F = 0;
  
 while(A--){
 scanf("%d", &B);
 if (B < 0)
 D++;
 else if (B > 0)
 C++;
 if (B % 2 == 0)
 E++;
 else
 F++;
 }
 printf("%d valor(es) par(es)\n", E);
 printf("%d valor(es) impar(es)\n", F);
 printf("%d valor(es) positivo(s)\n", C);
 printf("%d valor(es) negativo(s)\n", D);

    return 0;
}
