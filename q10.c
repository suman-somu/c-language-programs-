#include <stdio.h>
#include <stdio.h>
#include <math.h>

int factorial(int n);
int answer(int x,int n);
int main(){
    
    int x;
    printf("enter");
    scanf("%d",&x);
    double a= answer(x,0);

    printf("%lf",a);
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

double answer(int x,int n){

    int f= factorial(2*n+1);
    int p= pow(x,2*n+1);

    double r=(double) p/f;
    if(r < 0.00001){
        return 0.0;
    }
    else {
        return (r + answer(x,n+1));
    }
    
}
