#include<stdio.h>
int main(){
    char str1[20];
    char str2[20];
    int i;
    printf("enter string 1 :");
    scanf("%s",str1);
    char c;
    while(c!='\n'){
        
        scanf("%c",&c);
        str2[i] = c;
        i++;
    }
    str2[i - 1] = '\0';
    if(str1 == str2){
        printf("str 1 is %s",str1);
        printf("str 2 is %s",str2);
    }
    return 0;
}