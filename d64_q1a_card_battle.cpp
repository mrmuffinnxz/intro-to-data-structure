#include <iostream>
#include <iterator>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, tmp;
    cin >> n >> m;

    multiset<int> cards;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        cards.insert(tmp);
    }

    int win_count = 1;
    while (m--)
    {
        int c;
        cin >> c;

        bool is_winning = true;
        for (int i = 0; i < c; i++)
        {
            cin >> tmp;
            auto it = cards.upper_bound(tmp);
            if (*it != 0 && *it > tmp)
            {
                cards.erase(it);
            }
            else
            {
                is_winning = false;
                break;
            }
        }

        if (is_winning)
        {
            win_count++;
        }
        else
        {
            break;
        }
    }

    cout << win_count;

    return 0;
}