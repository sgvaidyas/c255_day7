#include <iostream>
#include <string>
#include <cstring>

int recursiveCount(int, int);
using namespace std;

int main()
{
	
	int n;
	cout<<"Please enter a value for n:"<<endl;
	cin>>n;
	cout<<recursiveCount(n,0);
	
	
	return 0;
}

//n=123
int recursiveCount(int n, int count)
{
	if(n/10 == 0)
		return ++count;
	else
		recursiveCount(n/10,++count); 
}

