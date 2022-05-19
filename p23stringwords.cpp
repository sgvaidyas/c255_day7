#include<iostream>
#include<cstring>
using namespace std;

void no_words(string s, int n, int count){
	if(s[n+1]=='\0'){
		cout<<count<<endl;
		return;
	}
	if(s[n] == ' '&& s[n+1]!=' '){
		count++;
	}	
	//"hi"
	if(n==0 && s[n] !=' '){
		count++;
	}
	no_words(s,++n,count);	
}
int main(){
	cout<<("Enter word");
	string s;
	getline(cin,s);
	no_words(s,0,0);	
}
