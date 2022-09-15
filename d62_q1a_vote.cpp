#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    map<string, int> vote;

    string t;
    while (n--)
    {
        cin >> t;
        vote[t]++;
    }

    vector<int> v;
    for (auto const &x : vote)
    {
        v.push_back(x.second);
    }

    sort(v.begin(), v.end(), greater<int>());

    if (v.size() < k)
    {
        cout << v[v.size() - 1];
    }
    else
    {
        int mn = numeric_limits<int>::max();
        for (int i = 0; i < k; i++)
        {
            mn = min(mn, v[i]);
        }
        cout << mn;
    }
}