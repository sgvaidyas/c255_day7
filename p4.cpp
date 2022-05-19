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
	int r1, c1, r2, c2, r, c;
    
    cout << "\nEnter rows adn columns\n";
    cin >> r1 >> c1;
    int arr1[r1][100];
    input2darray(r1, c1, arr1);
    output2darray(r1, c1, arr1);

    cout << "\nEnter rows adn columns\n";
    cin >> r2 >> c2;
    int arr2[r2][100];
    input2darray(r2, c2, arr2);
    output2darray(r2, c2, arr2);

    r = max(r1, r2);
    c = max(c1, c2);
    int result[r][100]{};

    add2_2darrays(r1, c1, arr1, r2, c2, arr2, result);
    cout << "Sum is \n";
    output2darray(r, c, result);
	
	
}

