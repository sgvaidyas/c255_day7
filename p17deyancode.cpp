#include<iostream>
#include<string>
using namespace std;

void printVowels(string v){
    char vowels[]{'a','o','u','e','i'};
    int len = sizeof(vowels)/sizeof(vowels[0]);

    if(v.length() > 0){
        for(int i =0;i< len;i++){
            if(v[0] == vowels[i] || v[0] == toupper(vowels[i])){
                cout << v[0] << endl;
            }
        }
    }
    else 
    	return;
    printVowels(v.substr(1,v.length()-1));
}


int main(){
	string str;
	
	cout<<"\n enter string = ";
	getline(cin,str);
	
	cout << "\n the string is: " << str << endl;
	printVowels(str);
	cout<<"------------------------";
}

