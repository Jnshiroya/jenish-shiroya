#include<stdio.h>
int main(){
    int mul[10];
    int n;
    int *ptr = &n;
    printf("number");
    scanf("%d",ptr);
    for(int i=0;i<10; i++){
        mul[i]= (*ptr) *(i+1);
        printf("%d X %d = %d \n",*ptr,i+1,mul[i]);
    }
    return 0;
}