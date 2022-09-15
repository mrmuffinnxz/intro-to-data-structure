#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> m;
    string word;
    while (n--)
    {
        cin >> word;

        if (m.find(word) == m.end())
        {
            m[word] = 1;
        }
        else
        {
            m[word]++;
        }
    }

    for (auto &x : m)
    {
        if (x.second > 1)
        {
            cout << x.first << " " << x.second << "\n";
        }
    }
}