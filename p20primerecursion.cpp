#include<iostream>
#include<cstring>
using namespace std;
void isPrime(int s, int n){
	if(n>(s/2)){
		cout<<"Prime";
		return;
	}
	if(s%n == 0){
		cout<<"Not Prime";
		return;
	}
	
	isPrime(s,++n);	
}
int main(){
	cout<<("Enter number");
	int s;
	cin>>s;
	isPrime(s,2);	
}

