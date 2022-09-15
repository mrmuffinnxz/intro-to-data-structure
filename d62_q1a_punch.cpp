#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it, int k)
{
    // write some code here
    // don’t forget to return something
    for (int i = 0; i < k + 1 && it != v.end(); i++)
        it = v.erase(it);
    for (int i = 0; i < k && it != v.begin(); i++)
        it = v.erase(it - 1);
    return v;
}

int main()
{
    int n, j, k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result)
    {
        cout << x << endl;
    }
}