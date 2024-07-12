#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int hash[26] = {0};                     //  if hash [256]
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']++;                       // hash[s[i]];
    }
    int q;
    cout << "ENTER A Q :";
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch;
        cout << hash[ch-'a'] << endl;         // hash[ch]
    }
}