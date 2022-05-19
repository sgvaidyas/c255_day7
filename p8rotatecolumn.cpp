#include<iostream>
#include "arrayfun.h"

int main(){
	int r1,c1, column_to_rotate, num_rotations, temp;
	cout<<"\n Enter rows and cols for matrix 1 = ";
	cin>> r1>>c1;
	int b[r1][100];
	input2darray(r1,c1,b);	
	cout<<"\n Enter which column you would like to rotate";
	cin>>column_to_rotate;
	cout<< "\n Enter the number of rotations you would like to perfom";
	cin>>num_rotations;
	column_to_rotate--;
	int i;
	for(int j = 0; j<num_rotations; j++){
		temp = b[0][column_to_rotate];
		for(i =0; i< r1-1; i++){
				b[i][column_to_rotate] = b[i+1][column_to_rotate];
		}
		b[i][column_to_rotate] = temp;
	}
	output2darray(r1,c1,b);	
}

