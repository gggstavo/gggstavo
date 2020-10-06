#include<stdio.h>
int main()
{
      int t,n,m;
      double  d;
      scanf("%d",&t);
      while(t--){
            scanf("%d %d",&n,&m);
            if(m==0)
            printf("divisao impossivel\n");
            else{
                  d=(double) n/m;
                  printf("%.1lf\n",d);
            }
      }
      return 0;
}
