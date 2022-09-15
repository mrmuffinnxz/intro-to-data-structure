#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    int arr[200001];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    int p;
    while (m--)
    {
        cin >> p;
        auto lower = lower_bound(arr, arr + n, p - k);
        auto up = upper_bound(arr, arr + n, p + k);
        cout << distance(lower, up) << " ";
    }
}