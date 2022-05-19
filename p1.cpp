#include<iostream>
#include "arrayfun.h"
using namespace std;
int main()
{
	int n;
/*	cout<<"\n Enter n = ";
	cin>>n;
	int a[n];
	inputarray(a,n);
	outputarray(a,n);
*/	
	int r,c,key,j;
	cout<<"\n Enter rows and cols = ";
	cin>>r>>c;
	int b[r][100];
	input2darray(r,c,b);
	//sorts the elements in each row.
	sortarray(b, r, c);
	output2darray(r,c,b);
}

