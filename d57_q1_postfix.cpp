#include <iostream>
#include <vector>
#include <stack>
using namespace std;

main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    stack<int> s;
    for (auto x : v)
    {
        if (x.first == 1)
        {
            s.push(x.second);
        }
        else
        {
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();

            if (x.second == 0)
            {
                s.push(a + b);
            }
            else if (x.second == 1)
            {
                s.push(a - b);
            }
            else if (x.second == 2)
            {
                s.push(a * b);
            }
            else
            {
                s.push(a / b);
            }
        }
    }
    cout << s.top();
}