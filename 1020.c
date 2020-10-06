#include <stdio.h>

int main() {

int N,A,M,D;

scanf("%d",&N);

A=N/365;

M=(N%365)/30;

D=(N%365)%30;

printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",A,M,D);

return 0;

}
