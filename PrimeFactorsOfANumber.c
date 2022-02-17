#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


_Bool prime(int n){
    
    bool r=false;
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        r=true;
    }
    else{
        r=false;
    }
    
    return r;
    
}

int main(){
    
    int n;
    scanf("%d",&n);
    
    if(n==0 || n==1){
        printf("Number should be larger than 1.");
    }
    else {
        
        int a[n+2];
        for(int i=0;i<n+1;i++){
            a[i]=0;
        }
        int p=0;
        for(int i=2;i<=n;i++){
            if(n%i==0 && prime(i)){
                a[p]=i;
                p++;
            }
        }
        
        printf("The prime factors of %d are:\n",n);
        for(int i=0;i<n+1;i++){
            if(a[i]){
                printf("%d ",a[i]);
            }
        }
    }
    
    
    return 0;
}
