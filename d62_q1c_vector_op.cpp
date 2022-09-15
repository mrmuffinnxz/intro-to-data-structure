#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main()
{
    int n;
    cin >> n;

    vector<int> v;
    string cmd;
    int cmd_value;

    while (n--)
    {

        cin >> cmd;
        if (cmd == "pb")
        {
            cin >> cmd_value;
            v.push_back(cmd_value);
        }
        else if (cmd == "sa")
        {
            sort(v.begin(), v.end());
        }
        else if (cmd == "sd")

        {
            sort(v.begin(), v.end(), greater<int>());
        }
        else if (cmd == "r")
        {
            reverse(v.begin(), v.end());
        }
        else if (cmd == "d")
        {
            cin >> cmd_value;
            v.erase(v.begin() + cmd_value);
        }
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
}