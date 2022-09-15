#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, x;
    cin >> n >> m;

    unordered_set<int> s;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    while (m--)
    {
        int q;
        cin >> q;

        bool is_found = false;
        for (int i = 0; i < n; i++)
        {
            if (s.find(q - arr[i]) != s.end() && q - arr[i] != arr[i])
            {
                is_found = true;
                break;
            }
        }

        cout << (is_found ? "YES\n" : "NO\n");
    }
}