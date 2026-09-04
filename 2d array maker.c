#include<stdio.h>

int main(){

    int i, j, r, c;

    printf("Enter the Number of rows of the Matrix: ");
    scanf("%d", &r);

    printf("Enter the Number of Columns of the Matrix: ");
    scanf("%d", &c);

    int a[r][c] ;
    
    for(i = 0 ; i < r ; i++){
        for(j=0 ; j < c; j++){
            printf("Enter the element [%d,%d] :  ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++){
        for(j = 0 ; j < c ; j++){
            printf("%4d", a[i][j]);
        }
    printf("\n");
    }
}