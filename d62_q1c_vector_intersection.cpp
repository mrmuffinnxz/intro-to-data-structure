#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main()
{
    int n, m, t;
    cin >> n >> m;

    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        b.push_back(t);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    a.resize(distance(a.begin(), unique(a.begin(), a.end())));
    b.resize(distance(b.begin(), unique(b.begin(), b.end())));

    vector<int>::iterator it1 = a.begin(), it2 = b.begin();

    while (it1 != a.end() && it2 != b.end())
    {
        if (*it1 < *it2)
        {
            it1++;
        }
        else if (*it1 > *it2)
        {
            it2++;
        }
        else
        {
            cout << *it1 << " ";
            it1++;
            it2++;
        }
    }
}