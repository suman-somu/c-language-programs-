#include <stdio.h>
#include <stdlib.h>

 int lcm (int a, int b);
 int hcf (int a, int b);
int main()
{
    
    int a,b;
    scanf("%d %d",&a,&b);
    
    int l= lcm(a,b);
    int h= hcf(a,b);
    
    printf("LCM of %d and %d is %d.\n",a,b,l);
    printf("HCF of %d and %d is %d.",a,b,h);
    
    return 0;
}
 int lcm (int a, int b)
{
    int r=1;
    int t1=a, t2=b;
    if(t1>t2){
        t1=b;
        t2=a;
    }
    
    for(int i=1;i<=t1;i++){
        if(t1%i==0 && t2%i==0)
        {
            r*=i;
            t1=t1/i;
            t2=t2/i;
            i=1;
        }
    }
    r=r*t1*t2;
    return r;
}
int hcf (int a, int b)
{
    int r=1;
    int t1=a, t2=b;
    if(t1>t2){
        t1=b;
        t2=a;
    }
    
    for(int i=1;i<=t1;i++){
        if(t1%i==0 && t2%i==0)
        {
            r*=i;
            t1=t1/i;
            t2=t2/i;
            i=1;
        }
    }
    return r;
}
