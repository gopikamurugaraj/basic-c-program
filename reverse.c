#include<stdio.h>
int main(){
    int num,y=0,x;
    printf("enter the num:");
    scanf("%d",&num);
    while(num>0){
        x=num%10;
        y=(y*10)+x;
        num=num/10;
    }
   printf("The reverse of given num is: %d",y);
}