#include<stdio.h>
void multiplicationtable(*mt,int a,int b);{
    for(int j=0;j<10;j++){

    }
    }

}
int main(){
 int mt[10][10];
 int t;
 printf("how many table you get:");
 scanf("%d \n",t);
 for(int i=0;i<t;i++){
     int table;
     printf("which table you get:");
 scanf("%d \n",table);
     multiplicationtable(&mt[i],table,10);
 }
    return 0;

}