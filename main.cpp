// Count Tripple
//  We'll say that a "triple" in a string is a char appearing three times in a row.
//  Set result to the number of triples in the given string. The triples may overlap.

//  • for input of "abcXXXabc" → 1
// • for input of "xxxabyyyycd" → 3
// • for input of"a" → 0

#include <iostream>
#include <string>
using namespace std;

int triple(const string &s)
{
    int result = 0;
    int len = s.size();
    for (int i = 0; i < len - 2; i++)
    {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2])
            result++;
    }
    return result;
}

int main()
{

    cout << "Testing triple(\"abcXXXabc\"): " << triple("abcXXXabc") << endl;
    cout << "Testing triple(\"xxxabyyyycd\"): " << triple("xxxabyyyycd") << endl;
    cout << "Testing triple(\"a\"): " << triple("a") << endl;
    return 0;
}