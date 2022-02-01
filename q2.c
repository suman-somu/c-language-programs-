//largest, smallest, mean, even, odd



#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[10];
    int l=sizeof(a)/sizeof(a[0]);
    printf("enter the values in array = \n");
    for(int i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");

    //largest element
    int max=a[0], maxInd=0;
    for(int i=0;i<l;i++){
        if(a[i]>max){
            max=a[i];
            maxInd=i;
        }
    }
    printf("max element is %d of index %d",max,maxInd);
    printf("\n");

    //smallest element
    int min=a[0], minInd=0;
    for(int i=0;i<l;i++){
        if(a[i]<min){
            min=a[i];
            minInd=i;
        }
    }
    printf("min element is %d of index %d",min,minInd);
    printf("\n");


    //mean value
    double mean=0.0;
    int sum=0;
    for(int i=0;i<l;i++){
        sum+=a[i];
    }
    mean=(double)sum/l;
    printf("mean value = %lf",mean);
    printf("\n");



    //even valued elements
    printf("even valued elements are =");
    for(int i=0;i<l;i++){
        if(a[i]%2==0){
            printf(" %d,",a[i]);
        }
    }
    printf("\n");

    //odd valued elements
    printf("odd valued elements are =");
    for(int i=0;i<l;i++){
        if(a[i]%2 != 0){
            printf(" %d,",a[i]);
        }
    }
    printf("\n");



    return 0;
}
