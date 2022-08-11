#include <iostream>

main()
{
    int H, M;
    std::cin >> H >> M;

    int m;
    std::cin >> m;

    M += m;
    H = (H + M / 60) % 24;
    M = M % 60;

    printf("%.2d %.2d", H, M);
}