#include <iostream>
#include <cmath>

int main()
{
    int x;
    std::cin >> x;

    if (x != 2 && x % 2 == 0)
        x++;

    while (true)
    {
        int i;
        double sqrtNum = std::sqrt(x);

        for (i = 3; i <= sqrtNum; i += 2)
        {
            if (x % i == 0)
                break;
        }

        if (i > sqrtNum)
            break;

        x += 2;
    }

    std::cout << x << std::endl;


    return 0;
}