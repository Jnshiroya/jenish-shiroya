#include<stdio.h>
int main()
{
    int marks[10];
    int *ptr = &marks[0];
    for(int i=0;i<10;i++){
      printf("roll number %d student marks",i+1);
      scanf("%d",ptr);
      ptr++;
    }
    for(int i=0;i<10;i++){
      printf("roll number %d student marks %d",i,marks[i]);
      
    
    }
    return 0;
}