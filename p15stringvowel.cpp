#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void vowels();

int main(){
	cout<<"Enter text:\n";
	vowels();
	cout<<"hjhjhkjhk";
	}
	
void vowels(){
	char letter;
	cin>>letter;
	if ((letter == '\n')||(letter == '\0')||(letter == '!')) return;
	
	if ((letter == 'a') || (letter == 'e') ||(letter == 'i') ||(letter == 'o') ||(letter == 'u') || (letter == 'A') ||(letter == 'E') ||(letter == 'I') ||(letter == 'O') ||(letter == 'U')){
		cout<<letter;
	}
	vowels();
}

