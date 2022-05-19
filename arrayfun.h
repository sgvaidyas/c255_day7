

#include<iostream>
using namespace std;

void inputarray(int a[], int n)
{
	cout<<"\n Enter 1d array ele =\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void outputarray(int a[], int n)
{
	cout<<"\n the array elements = \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	
	cout<<endl;
}
void input2darray(int r,int c,int b[][100])
{
	cout<<"\n Enter 2d array ele =\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>b[i][j];
		}		
	}
}
void output2darray(int r,int c,int b[][100])
{
	cout<<"\n the array elements = \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<"\n";
	}	
	cout<<endl;
}
void sortarray(int arr[][100], int row, int col) 
{
	int temp = 0;
	
	for (int i = 0; i < col; i++)
	{
		for (int c = i + 1; c < col; c++)
		{
			for(int j = 0; j < row;j++)
			{
				if (arr[j][i] > arr[j][c])
				{
					temp = arr[j][i];
					arr[j][i] = arr[j][c];
					arr[j][c] = temp;
				}
			}		
		}
	}
}
//Quintin

void add22darrays(int r, int c, int n, int m, int a[][100], int b[][100]){
	int rows = (r > n) ? r : n;//take the max
	int cols = (c > m) ? c : m;
	int d[rows][100];
	
	//E.g. 1C = True iff the index does not exceeds number of columns of first matrix
	bool oneC, twoC;
	bool oneR, twoR;
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			d[i][j] = 0;
			
			oneC = (j < c);
			twoC = (j < m);
			
			oneR = (i < r);
			twoR = (i < n);
			
			if (oneC && oneR) d[i][j] += a[i][j];
			if (twoC && twoR) d[i][j] += b[i][j];
		}
	}
	
	output2darray(rows, cols, d);
}
// David
void add2_2darrays(int r1, int c1, int arr1[][100], int r2, int c2, int arr2[][100], int result[][100]) {

	int j;
	for (int i = 0; i < r1; i++) {
		for ( j = 0; j < c1; j++) {
			result[i][j] += arr1[i][j];
		}
	}
	
	for (int i = 0; i < r2; i++) {
		for (int j = 0; j < c2; j++) {
			result[i][j] += arr2[i][j];
		}
	}
}
//quintin
void triangularSums(int r, int c, int a[][100]){
	int upperSum = 0, lowerSum = 0;
	bool upper, lower;
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			if (j > i) upperSum += a[i][j];
			else if (j < i) lowerSum += a[i][j];
		}
	}
	cout<<"\nThe upper triangular sum is: "<<upperSum<<"\n";
	cout<<"\nThe lower triangular sum is: "<<lowerSum<<"\n";
}
void matrixMult(int r, int c, int n, int m, int a[][100], int b[][100]){
	if (c != n) {cout<<"\nCannot multiply these matrices\n"; return;}
	
	int d[r][100] = {}; //product has m columns
	for (int i = 0; i < r; i++){
		for (int j = 0; j < m; j++){
			//Add up the products
			for (int k = 0; k < c; k++) //(c==n)
				d[i][j] += a[i][k]*b[k][j];
		}
	}
	output2darray(r,m,d);
}
void rotateMatrixRow(int x, int y, int row, int mtrx[][100]) {
  int aux = mtrx[0][row];
  
  for (int i = 0; i < x; i++) {    // col
    for (int j = 0; j < y; j++) {  // row
      if (j == row) {
        // cout <<mtrx[i][j] << endl;
        if (i < x - 1) {
          mtrx[i][j] = mtrx[i + 1][j];
          continue;
        }
      }
    }
  }
  mtrx[x-1][row] = aux;
  
}
