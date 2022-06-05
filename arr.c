#include<stdio.h>
int main(){
    int arr[10];
    int *ptr = &arr[0];
    ptr = ptr + 2;
    if(ptr == &arr[2]){
        printf("adress of arr[2] is %u",ptr);

    }
    else {
        printf("not same address");
    }
    return 0;
}