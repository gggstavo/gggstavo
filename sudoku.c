  
#include <stdio.h>
int matrizes3x3(int*); 
int main() {
    int sudoku[9][9]; 
    int n; 
    scanf("%d",&n);
    int k=0;
    int i,j,p; 
    int linhas=0,colunas=0, matrizes=0;
    int SimOuNao=0; 
    while(k!=n){
        k++; 
        linhas=0, colunas=0, matrizes=0,SimOuNao=0;
        
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(i==8 && j==8){
                    scanf("%d",&sudoku[i][j]);
                }else{
                    scanf("%d ",&sudoku[i][j]);
                }
                if(sudoku[i][j]>9 || sudoku[i][j]<1){
                    SimOuNao=1; 
                }
            }
        }
 

        for(p=0;p<9;p++){
            for(i=0;i<9;i++){
                for(j=0;j<9;j++){
                    if(i!=j){
                        if(sudoku[p][i]==sudoku[p][j]){
                            linhas=1;
                        }
                        if(sudoku[i][p]==sudoku[j][p]){
                        colunas=1; 
                        }
                    }
                 }
            }
        }

        for(i=0;i<=6;i+=3){
            for(j=0;j<=6;j+=3){
                matrizes= matrizes3x3(&sudoku[i][j]);
            }
        }

        if(colunas==1 || linhas==1 || matrizes==1){
            SimOuNao=1; 
        }
        printf("Instancia %d\n",k);
        
        if(SimOuNao){
            printf("NAO\n");
        }else{
            printf("SIM\n");
        }
        
        printf("\n");
    }
    return 0;
}

int matrizes3x3(int* matriz){
    int i,j, matrizes=0;
   
    int teste[]={*matriz, *(matriz+1),*(matriz+2), 
                    *(matriz+9),*(matriz+10), *(matriz+11),
                    *(matriz+18), *(matriz+19), *(matriz+20)};
    
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(i!=j && teste[i]== teste[j]){ 
                matrizes=1;
            }
        }
    }
    return matrizes;
}
