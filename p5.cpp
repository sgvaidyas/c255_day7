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

#include <iostream>
#include "arrayfun.h"
using namespace std;

int main(){
	int r,c;
	cout<<"Please enter a value for rows and columns ";
	cin>>r>> c;
	int b[r][100];
	input2darray(r,c,b);
	output2darray(r,c,b);
	triangularSums(r,c,b);
}

