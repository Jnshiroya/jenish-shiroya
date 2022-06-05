#include<stdio.h>
void deletion(int arr[],int a,int index){
    printf("input : \n");
    for(int i=0;i<a;i++){
      scanf("%d",&arr[i]);
    }
    for (int i =index; i < a-1; i++)
    {
        /* code */
        arr[i]=arr[i+1];
    }
    for (int i = 0; i < a-1; i++)
    {
        /* code */
        printf(" %d ",arr[i]);
    }
    
}
int main(){
    int arr[10];
     deletion(arr,10,2);
    return 0;
}