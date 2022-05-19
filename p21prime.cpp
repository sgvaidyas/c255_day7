#include<iostream>
using namespace std;

bool isPrime(int n, int i);
	
int main(){
	int n;
	cout << "Enter n ";
	cin >> n;
	
	if(isPrime(n, 2))
		cout << n << " is prime";
	else
		cout << n << " is not prime";
}

bool isPrime(int n, int i = 2){
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
 
    return isPrime(n, i + 1);
}

