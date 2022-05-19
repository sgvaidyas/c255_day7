/*

	0	1	2	3
	-----------------
0  11	2	44	1
1	2	2	3	6
2	33	4	5	6
3	2	1	3	7

sum of elements above diagonal = 62
sum of elements below diagonal = 45

*/
#include<iostream>
#include "arrayfun.h"
using namespace std;

int aboveDiagonalSum(int row, int column, int arr[][100]);
int belowDiagonalSum(int row, int column, int arr[][100]);

int main(){
	int row, column;
	cout << "\n Enter rows and columns = ";
	cin >> row >> column;
	int arr[row][100];
	input2darray(row, column, arr);
	output2darray(row, column, arr);
	

	cout << "Sum above diagonal = " << aboveDiagonalSum(row, column, arr) << endl;
	cout << "Sum below diagonal = " << belowDiagonalSum(row, column, arr) << endl;
	
}

int aboveDiagonalSum(int row, int column, int arr[][100]){
	int sum=0;
	for(int i = 0; i < row; i++){
		for(int j = i + 1; j < column; j++){
			sum+= arr[i][j];
		}
	}
	return sum;
}

int belowDiagonalSum(int row, int column, int arr[][100]){
	int sum=0;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < i; j++){
			sum+= arr[i][j];
		}
	}
	return sum;
}
