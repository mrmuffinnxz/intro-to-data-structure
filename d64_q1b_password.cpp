#include <iostream>
#include <string.h>
#include <set>
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, l;
    cin >> n >> m >> l;

    int k[51];
    for (int i = 0; i < l; i++)
    {
        cin >> k[i];
    }

    set<string> s;
    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        s.insert(tmp);
    }

    for (int i = 0; i < m; i++)
    {
        string p;
        cin >> p;

        string pe = "";
        for (int j = 0; j < l; j++)
        {
            pe += ('a' + ((p[j] - 'a' + k[j]) % 26));
        }
        if (s.find(pe) != s.end())
        {
            cout << "Match\n";
        }
        else
        {
            cout << "Unknown\n";
        }
    }
}