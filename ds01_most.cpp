#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

main()
{
    int n, mx = 0;
    string s, wordmx = "";

    cin >> n;

    map<string, int> m;

    while (n--)
    {
        cin >> s;
        if (m.find(s) != m.end())
        {
            m[s]++;
        }
        else
        {
            m[s] = 1;
        }
    }

    for (auto const &x : m)
    {
        if (x.second >= mx)
        {
            wordmx = x.first;
            mx = x.second;
        }
    }

    cout << wordmx << " " << mx;
}