#include<stdio.h>
int main(){
    int mat[3][2]={{2,3},{5,6},{8,9}};
    int tra[2][3];

    //print orginal matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     
    // convert transpose
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            tra[j][i]=mat[i][j];
        }
    }

    // print transpose matrix
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",tra[i][j]);
        }
        printf("\n");
    }

return 0;
}

    
 