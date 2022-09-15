#include <iostream>
#include <algorithm>
#include <limits>
#include <set>
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    pair<int, int> arr[200001];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr + n);

    int q;
    while (m--)
    {
        cin >> q;
        auto up = (upper_bound(arr, arr + n, make_pair(q, numeric_limits<int>::max())) - 1);
        if (up < arr || up >= arr + n || q < up->first || q > up->second)
        {
            cout << "0 ";
        }
        else
        {
            cout << "1 ";
        }
    }
}