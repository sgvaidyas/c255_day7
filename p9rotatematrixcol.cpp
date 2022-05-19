#include<iostream>
#include "arrayfun.h"

int main(){
	int row = 4,col=1;
	int mtrx[row][100]{{11,22,3},{2,7,4},{5,6,7},{1,2,3}};
	output2darray(row,3,mtrx);	
	int rotation=3;
	for(int i=1;i<=rotation;i++)
		rotateMatrixRow(row,100,col,mtrx);
	output2darray(row,3,mtrx);
	
	
}

