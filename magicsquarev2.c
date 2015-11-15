//Magic Square v2
//Function

#include <stdio.h>

int nRows;
int nCols;
void magicsquare(int, int);

int main()
{

	int k;
	int p;

	printf("Enter number of Rows: \n");
	scanf("%i",&nRows);


	printf("Enter number of Columns: \n");
	scanf("%i",&nCols);

	magicsquare(nRows,nCols);

}

void magicsquare(int nRows, int nCols){	

	int k;
	int p;
	int sumR;
	int sumC;
	int sumD = 0;
	int sumD2 = 0;
	int isMagic = 1;
	
	int matrix[nRows][nCols];

	//Enterring Coefficients of the Matrix
	for(k = 0; k < nRows; ++k){
		for(p = 0; p < nCols; ++p){
			printf("Enter value for Matrix[%i][%i]: ",k,p);

			scanf("%i",&matrix[k][p]);
		}

	}

	//Adding diagonal elements
	for(k = 0; k < nRows ; ++k){
			sumD += matrix[k][k];
			sumD2 += matrix[k][nCols - k - 1];
	}
		printf("Sum of right Diagonal = %i\n",sumD);
		printf("Sum of left Diagonal = %i\n",sumD2);



	//Adding the rows
	for(k = 0; k < nRows; ++k){
		for(p = 0; p < nCols; ++p){
			sumR += matrix[k][p];
		}
		printf("Sum of the %i row is = %i\n",k,sumR);
			if(sumR != sumD && sumD2)
			 isMagic = 0;
		sumR = 0;
	}

	//Adding the columns
	for(p = 0; p < nRows; ++p){
		for(k = 0; k < nCols; ++k){
			sumC += matrix[k][p];
		}
		printf("Sum of the %i column is = %i\n",p,sumC);
			if(sumC != sumD && sumD2)
			 isMagic = 0;
		sumC = 0;

	}

	if(isMagic){
		printf("\nMagic Square!\n");
	}
	else{
		printf("\nNot a Magic Square!\n");
	}
}

