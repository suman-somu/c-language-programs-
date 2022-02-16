#include <stdio.h>
#include <stdio.h>
#include <math.h>

int factorial(int n);
int answer(int x,int n);
int main(){
    
    int x;
    printf("enter");
    scanf("%d",&x);
    int a= answer(x,1);

    printf("%d",a);
    return 0;
}

int factorial(int n){

    if(n==0)
    return 1;

    int r=1,t=n;
    while(n-->0){
        r*=t--;
    }
    return r;
}

int answer(int x,int n){

    int f= factorial(n);
    int p= pow(x,2*n+1);

    if(p/f < 0.00001){
        return 0;
    }
    else {
        return ((p/f) + answer(x,n+1));
    }
    
}
