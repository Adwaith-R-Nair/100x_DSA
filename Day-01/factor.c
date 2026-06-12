#include<stdio.h>
int n = 5;
int f1;
int f2;

void main(){
    for (int i = 1; i*i <= n; i++){
    if (n % i == 0){
        f1 = i;
        f2 = n / i;
    } 
    if(f1 == f2){
        printf("%d ",f1);
    }
    else{
        printf("%d ",f1);
        printf("%d ",f2);
    }
}
}