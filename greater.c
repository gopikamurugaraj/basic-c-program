#include<stdio.h>
int greater(int d,int e,int f){
    if(d>=e && d>=f)
        return d;
    else if(e>=d && e>=f)
        return e;
    else
        return f;
}

int main(){
    int a,b,c,greatest;
    printf("enter the three num:");
    scanf("%d %d %d",&a,&b,&c);
    greatest= greater(a,b,c);
    printf("the greatest num is:%d",greatest);
    return 0;

 
 
 }
 