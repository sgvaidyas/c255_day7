#include<iostream>
#include<string>
using namespace std;
void printVowels(string str, int n);
	

int main(){
	string str;
	
	cout<<"\n enter string = ";
	getline(cin,str);
	
	cout << "\n the string is: " << str << endl;
	printVowels(str,0);
}

void printVowels(string str, int n){
	char ch = str[n];
	switch(ch){
		case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'u': case 'U': case 'o': case 'O':
			cout << ch << " ";
			break;
		case '\0':
			return;
		default: break;
	}
	printVowels(str,n+1);
}

