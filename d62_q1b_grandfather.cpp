#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    map<long long, long long> father;

    long long f, s;
    while (n--)
    {
        cin >> f >> s;
        father[s] = f;
    }

    long long a, b;
    while (m--)
    {
        cin >> a >> b;

        if (father[father[a]] && father[father[b]] && a != b && father[father[a]] == father[father[b]])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}