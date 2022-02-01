//insert, delete, print, reverse



#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[]={1,2,3,4,5,6,7,8,9,10};

    int l=sizeof(a)/sizeof(a[0]);
    //printf("%d",l);

    //printing the array
    printf("original array = ");
    for(int i=0;i<l;i++){
        printf("%d ",a[i]);
    }
    printf("\n");


    //reversing the array
    int r[10];
    for(int i=0;i<l;i++){
        r[9-i]=a[i];
    }
    printf("reversed array = ");
    for(int i=0;i<l;i++){
        printf("%d ",r[i]);
    }
    printf("\n");


    //removing an element
    int removeIndex = 4;
    a[removeIndex]=0;
    printf("after removed index= ");
    for(int i=0;i<l;i++){
        printf("%d ",a[i]);
    }
    printf("\n");


    int addedIndex= 7;
    a[addedIndex]=47;
    printf("after added value to index= ");
    for(int i=0;i<l;i++){
        printf("%d ",a[i]);
    }
    printf("\n");


    return 0;
}
