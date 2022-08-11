#include <iostream>
#include <limits>

int n, m, q;
int arr[101][101];

void max2d(int r1, int c1, int r2, int c2)
{
    if (r1 > r2 || c1 > c2)
    {
        std::cout << "INVALID\n";
        return;
    }

    int mx = std::numeric_limits<int>::min();
    for (int i = std::max(r1, 0); i <= std::min(r2, n-1); i++)
    {
        for (int j = std::max(c1, 0); j <= std::min(c2, m-1); j++)
        {
            mx = std::max(mx, arr[i][j]);
        }
    }

    mx == std::numeric_limits<int>::min() ? std::cout << "OUTSIDE\n" : std::cout << mx << "\n";
}

main()
{
    std::cin >> n >> m;
    std::cin >> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    for (int i=0; i < q; i++) {
        int r1, c1, r2, c2;
        std::cin >> r1 >> c1 >> r2 >> c2;
        max2d(r1 - 1, c1 - 1, r2 - 1, c2 - 1);
    }
}