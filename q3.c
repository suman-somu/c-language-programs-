//addition, multiplication, transpose, determinant of matrix



#include <stdio.h>
#include <stdlib.h>

int main(){
    {
        //Addition of two 2*3 matrices.

        int m1[2][3],m2[2][3],sum[2][3];

        printf("\nPlease input first 2*3 matrix for addition:\n");
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++)
                scanf("%d",&m1[i][j]);
        }//Matrix m1 input
        printf("Please input second 2*3 matrix:\n");
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++)
                scanf("%d",&m2[i][j]);
        }//Matrix m2 input

        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++)
                sum[i][j]=m1[i][j]+m2[i][j];
        }//Addition

        printf("The sum of above two matrices is:\n");
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++)
                printf("%d ",sum[i][j]);
            printf("\n");
        }//Printing Sum
    }

    {
        //Multiplication of two compatible matrices

        int a,b,c;
        printf("\nPlease enter the number of rows and columns in first matrix and number of columns in second matrix to multiply: ");
        scanf("%d %d %d",&a,&b,&c);

        int m1[a][b],m2[b][c],prod[a][c];
        int temp,sum=0;

        printf("Please input first %d*%d matrix:\n",a,b);
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++)
                scanf("%d",&m1[i][j]);
        }//Matrix m1 input
        printf("Please input second %d*%d matrix:\n",b,c);
        for(int i=0;i<b;i++){
            for(int j=0;j<c;j++)
                scanf("%d",&m2[i][j]);
        }//Matrix m2 input

        for(int i=0;i<a;i++){
            for(int j=0;j<c;j++){
                for(int k=0;k<b;k++){
                    temp=m1[i][k]*m2[k][j];
                    sum+=temp;
                }
                prod[i][j]=sum;
                sum=0;
            }
        }//Multiplication

        printf("The product of above two matrices is:\n");
        for(int i=0;i<a;i++){
            for(int j=0;j<c;j++){
                printf("%d ",prod[i][j]);
            }
            printf("\n");
        }//Printing Product Matrix
    }

    {
        //Transpose of a 3*4 matrix.

        int a[3][4],t[4][3];

        printf("Please enter the matrix for Transpose:\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                scanf("%d",&a[i][j]);
            }
        }//Taking Input

        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                t[i][j]=a[j][i];
            }
        }//Transpose

        printf("The transpose of above matrix is:\n");
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                printf("%d ",t[i][j]);
            }
            printf("\n");
        }//Printing Transpose Matrix
    }

    {
        //Finding Determinant of a 3*3 Matrix

        int a[3][3],det;

        printf("Please enter a 3*3 Matrix whose determinant is to be found:\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                scanf("%d",&a[i][j]);
            }
        }//Taking Input

        det=a[0][0]*((a[2][1]*a[1][2])-(a[1][1]*a[2][2])) + a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2])) + a[0][2]*((a[2][0]*a[1][1])-(a[1][0]*a[2][1]));//Finding Determinant

        printf("Determinant of the above matrix is: %d",det);//Printing Determinant

    }
    return 0;
}
