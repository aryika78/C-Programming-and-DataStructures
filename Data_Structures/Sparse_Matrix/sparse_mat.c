#include<stdio.h>

void main()
{
    int row,column,rows,cols,sparseMatrix[10][10],noz=0,nonsparseMatrix[10][3];

    printf("\nPlease enter number of rows:");
    scanf("%d",&rows);
    printf("\nPlease enter number of columns:");
    scanf("%d",&cols);

    printf("\nPlease enter matrix elements:");
    for(row=0;row<rows;row++)
    {
        printf("\nRow: %d\n",row);
        for(column=0;column<cols;column++)
        {
            scanf("%d",&sparseMatrix[row][column]);
        }
    }

    for(row=0;row<rows;row++)
    {
        for(column=0;column<cols;column++)
        {
            if(sparseMatrix[row][column] !=0)
            {
                noz++;
            }
        }
    }

    if (noz<(rows*cols)/2)
    {
        printf("\nThe Matrix that you entered is a Sparse Matrix\n");
        int k=0;
        for(row=0;row<rows;row++)
        {
            for(column=0;column<cols;column++)
            {
                if(sparseMatrix[row][column] !=0)
                {
                    nonsparseMatrix[k][0]=row;
                    nonsparseMatrix[k][1]=column;
                    nonsparseMatrix[k][2]=sparseMatrix[row][column];
                    k++;
                }
            }
        }

        for(row=0;row<rows;row++)
                {
                    for(column=0;column<cols;column++)
                    {
                        printf("%3d",nonsparseMatrix[row][column]);
                    }
                    printf("\n");
                }
    }
    else
    {
        printf("\nThe matrix you entered is not sparse matrix");
    }
}


