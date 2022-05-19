#include <iostream>

using namespace std;

int countWords(string s, bool wordFound)
{
    if (s[0] == '\0')
    {
        return 0;
    }
    else if (s[0] != ' ')
    {
        if (!wordFound)
        {
            return countWords(s.substr(1, s.length()), true) + 1;
        }
        else
        {
            return countWords(s.substr(1, s.length()), true);
        }
    }
    return countWords(s.substr(1, s.length()), false);
}

int main()
{
    string s;
    cout << "Provide a string: ";
    getline(cin, s);
    cout << "Number of words found: " << countWords(s, false) << endl;
}
