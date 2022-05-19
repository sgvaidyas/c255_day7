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


#include <iostream>
#include "array_io.h"

using namespace std;

int main()
{
    int r1 = 2;
    int c1 = 4;
    int a[r1][100];

    cout << "Enter r1: " << endl;
    cin >> r1;
    cout << "Enter c1: " << endl;
    cin >> c1;
    array2d_input(a, r1, c1, "Provide array elements: ");

    int r2 = 3;
    int c2 = 3;
    int b[r2][100];

    cout << "Enter r2: " << endl;
    cin >> r2;
    cout << "Enter c2: " << endl;
    cin >> c2;
    array2d_input(b, r2, c2, "Provide array elements: ");

    int cRows = r1 >= r2 ? r1 : r2;
    int cCols = c1 >= c2 ? c1 : c2;
    int c[cRows][100];

    // add the two arrays together
    for (int i = 0; i < cRows; i++)
    {
        for (int j = 0; j < cCols; j++)
        {
            // can use array A value
            if (i < r1 && j < c1)
            {
                if (i < r2 && j < c2)
                {
                    // add A & B values
                    c[i][j] = a[i][j] + b[i][j];
                } 
                else {
                    c[i][j] = a[i][j];
                }
            }
            // array B value can be used
            else if (i < r2 && j < c2)
            {
                if (i < r1 && j < c1)
                {
                    c[i][j] = a[i][j] + b[i][j];
                }
                else {
                    c[i][j] = b[i][j];
                }
            }
            // both missing
            else
            {
                c[i][j] = 0;
            }
        }
    }
    array2d_output(c, cRows, cCols, "Combined array: ");
}
