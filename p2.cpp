/*

	0	1	2	3								0    	1	2   	3
0	11	2	44	5		A				C	0	11+6	2+5	44+2	5
1	2	2	3	9							1	2+7 	6+2	3+3 	9
											2	1    	3	5	    0
															
	0	1	2												
0	6	5	2		B										
1	7	6	3												
2	1	3	5												
															

*/

#include<iostream>
#include "arrayfun.h"
using namespace std;

int main(){
	int r1,c1,r2,c2,r3,c3;
	cout<<"\n Enter rows and cols for matrix 1 = ";
	cin>> r1>>c1;
	int b[r1][100];
	input2darray(r1,c1,b);
	cout<<"\n Enter rows and cols for matrix 2 = ";
	cin>>r2>>c2;
	int c[r2][100];
	input2darray(r2,c2,c);
	r3 = max(r1,r2);
	c3 = max(c1,c2);
	int d[r3][100];
	
	for(int i =0; i< r3; i++){
		for(int j =0; j<c3;j++){
			if((i>=r2||j>=c2)&& i>=r1||j>=c1)
				d[i][j] = 0;
			else if(i>=r1||j>=c1){
				d[i][j] = c[i][j];
			}else if(i>=r2||j>=c2){
				d[i][j] = b[i][j];
			}
			else{
				d[i][j] = b[i][j] + c[i][j];
			}
		}
	}

	output2darray(r3,c3,d);	
	
	
}

