#include<iostream>
using namespace std;

bool isPrime(int n, int i = 2) {
    if (n % i == 0 || n <= 1) {
    return false;
    }
    else if (i > n / 2) {
        return true;
    }
    
    else return isPrime(n, i + 1);
}

int main(){
	cout<<("Enter number");
	int n;
	cin>>n;
	if(isPrime(n))
		cout << n << " is prime";
	else
		cout << n << " is not prime";	
}

