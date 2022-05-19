#include <iostream>
#include "arrayfun.h"
using namespace std;

int main(){
	int r,c,n,m;
	cout<<"\nPlease enter a value for rows and columns ";
	cin>>r>>c;
	int a[r][100];
	input2darray(r,c,a);
	output2darray(r,c,a);
	cout<<"\nPlease enter a value for n, m";
	cin>>n>>m;
	int b[n][100];
	input2darray(n,m,b);
	output2darray(n,m,b);
	cout<<"\nProduct of these matrices\n";
	matrixMult(r,c,n,m,a,b);
}

