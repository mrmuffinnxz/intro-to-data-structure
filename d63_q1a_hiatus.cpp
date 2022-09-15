#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    pair<int, int> p[200001];
    for (int i = 0; i < n; i++)
        cin >> p[i].first >> p[i].second;
    sort(p, p + n);

    int a, b;
    while (m--)
    {
        cin >> a >> b;

        auto lower = lower_bound(p, p + n, make_pair(a, b));

        if (lower == p + n)
            cout << p[n - 1].first << " " << p[n - 1].second << " ";
        else if (lower->first == a && lower->second == b)
            cout << "0 0 ";
        else if (lower == p)
            cout << "-1 -1 ";
        else
            cout << (lower - 1)->first << " " << (lower - 1)->second << " ";
    }
}