#include <iostream>
#include <vector>
#include <algorithm>

int main() // N inst exec by line executed
{
    int n;                       // 1
    std::cin >> n;               // 1
    int max1 = 0;
    int max2 = 0;

    for (int i = 0; i < n; ++i) // 1+2n
    {
        int current;
        std::cin >> current; // 1
        if (current > max1 || current > max2)
        {
            if (current > max1)
            {
                int t = max1;
                max1 = current;
                max2 = t;
            }
            else
            {
                max2 = current;
            }
        }
    }

    std::cout << (long long)max1 * max2 << "\n";
    return 0;
}
