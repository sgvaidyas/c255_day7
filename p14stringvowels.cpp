#include<iostream>
#include<cstring>
using namespace std;


void print_vowels(string s, int n){
	if(s[n] =='\0'){
		return;
	}
	if(toupper(s[n])==  'A' ||toupper(s[n])  == 'E' || toupper(s[n])  == 'I' ||toupper(s[n])  ==  'O'||toupper(s[n])  == 'U')
		cout<<s[n]<<endl;	

	print_vowels(s, n+1);
}
int main(){
	cout<<("Enter string");
	string s;
	getline(cin, s);
	print_vowels(s,0);	
}

