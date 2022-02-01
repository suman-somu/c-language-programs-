//first occurance of a number



#include <stdio.h>
#include <stdlib.h>

int main()
{


    int a[10];
    int l=sizeof(a)/sizeof(a[0]);
    printf("enter the elements of array= \n");
    for(int i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");


    printf("enter the value to be scanned= \n");
    int s;
    scanf("%d",&s);
    printf("\n");


    printf("SEARCHING FOR THE ELEMENT... \n \n");

    int f=0,c=0;
    for(int i=0;i<l;i++){
        if(a[i]==s){
            f=i;
            c++;
            break;
        }
    }
    if(f==0){
        if(c>0){
            printf("the first occurance of the number=%d, is in the index= %d.",s,f);
        }
        else{
            printf("not found");
        }
    }
    else{
        printf("the first occurance of the number= %d is in the index= %d ",s,f);
    }
    printf("\n");
    return 0;
}
