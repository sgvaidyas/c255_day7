#include<iostream>
using namespace std;

void print(int n)
{
	if(n<0)
		return ;
	if(n%3==0)
	{
		print(n-3);
		cout<<n<<endl;
	}	
	else
		print(n-1);
	
}
int main()
{
	print(41);
	
	return 0;
	
}
