#include <iostream>
#include <cstring>
#include <set>
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n;

    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        s.insert(x);
    }

    bool isTrue = s.size() == n;
    for (int i = 1; i <= n; i++)
        isTrue = isTrue && (s.find(i) != s.end());

    cout << (isTrue ? "YES" : "NO");
}