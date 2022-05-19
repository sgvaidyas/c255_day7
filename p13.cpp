#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	string str;
	
	cout<<"\n enter string = ";
	getline(cin,str);
	
	cout<<"\n the string is = "<<str<<endl;
	cout<<(toupper(str[0])=='H')<<endl;
	
	
	return 0;
	
}
