#include<stdio.h>
void printTable(int *mulTable, int *ptr, int n){
    printf("The multiplication table of %d is :\n", num);
    for(int i=0; i<n; i++){
        mulTable[i] = num*(i+1);
    }

    
    printf("******************\n\n");
}

int main(){
    int mulTable[10][10];
     int t;
     int m;
     int *ptr = &m;
     fflush(stdin);
 printf("how many table you get:");
 scanf("%d ",t);
 for(int i=0;i<t;i++){
     fflush(stdin);
     scanf("%d",ptr);
     fflush(stdin)
    printTable(mulTable[i], ptr, 10);
    for(int j=0; j<10; j++){
        printf("%dX%d = %d\n", *ptr, j+1, mulTable[i][j]);
    }
    
 }

    return 0;
}
