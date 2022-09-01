#include<stdio.h>
main(){
    int mat1[2][2] , mat2[2][2] , mat[2][2];
    int i,j;
    printf("The values for First Matrice \n");
    for(i=0;i<2;i++){ 
        for(j=0;j<2;j++){
            printf("Enter the value of matrice 1 [%d] and [%d] : ", i , j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("The values of Second Matrice \n");
    for(i=0;i<2;i++){ 
        for(j=0;j<2;j++){
            printf("Enter the value of matrice 2  [%d] and [%d] : ", i , j);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("The Subtraction of both matrice is : \n");
    for(i=0;i<2;i++){ 
        for(j=0;j<2;j++){
            mat[i][j]=mat1[i][j]-mat2[i][j];
            printf("Enter the value of Subtraction of matrice 1 and 2 is %d \n", mat[i][j]);
        }
    }
    printf("<== Matrix Form ==>\n");
    for(i=0;i<2;i++){ 
        for(j=0;j<2;j++){
            printf("%d", mat[i][j]);
            if(j==1){
                printf("\n");
            }
        }
    }

}