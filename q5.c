//most frequent element



#include <stdio.h>
#include <stdlib.h>

int main()
{


    int a[15];
    int l=sizeof(a)/sizeof(a[0]);
    printf("enter the elements of array \n");
    for(int i=0;i<l;i++){
        scanf("%d",&a[i]);
    }

    int max=a[0];
    int freq=1;
    int c=0;
    for(int i=0;i<l;i++){


        //find the frequency of each element here
        c=0;

        for(int j=0;j<l;j++){
            if(a[j]==a[i]){
                c++;
            }
        }

        if(c>freq){
            max=a[i];
            freq=c;
        }


    }

    if(freq>1){
        printf("\nthe most frequency element is %d and it has a frequency of %d.\n",max,freq);
    }
    else{
        printf("\nevery number is occuring one time only.\n");
    }




    return 0;
}
