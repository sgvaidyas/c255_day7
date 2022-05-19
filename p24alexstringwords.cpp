#include <iostream>
using namespace std;
int word_count = 0;
void rec(const char * arr, int i, int & was_space)
{
	if (arr[i] == '\0')
	{
		if(arr[i - 1] != ' ')
			word_count++;
		return;
	}
	if (arr[i] == ' ' && was_space == 1)
	{
		word_count++;
		was_space = 2;
	}
	if (arr[i] != ' ')
		was_space = 1;
	i++;
	rec(arr, i, was_space);
}
int main()
{
	const char* arr = "   are you   seeing this?   ";
	int i = 0;
	int was_space = 0;
	rec(arr, i, was_space);
	cout << word_count << "\n";
}
