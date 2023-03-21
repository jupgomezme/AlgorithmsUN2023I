#include <iostream>
#include <vector>
#include <algorithm>

int main() // N inst exec by line executed
{
    long long execints = 0LL;

    execints++;
    int n; // 1
    execints++;
    std::cin >> n; // 1
    execints++;
    int max1 = 0; // 1
    execints++;
    int max2 = 0; // 1

    execints++;
    for (int i = 0; i < n; ++i) // 1+2n
    {
        execints += 2;

        execints++;
        int current; // 1
        execints++;
        std::cin >> current; // 1
        execints += 2;
        if (current > max1 || current > max2) // 2
        {
            execints++;
            if (current > max1) // 1
            {
                execints++;
                int t = max1; // 1
                execints++;
                max1 = current; // 1
                execints++;
                max2 = t; // 1
            }
            else
            {
                execints++;
                max2 = current; // 1
            }
        }
    }

    execints += 3;
    std::cout << (long long)max1 * max2 << "\n"; // 3
    std::cout << "#Instructions: " << execints << std::endl;
    return 0; // 1 + 1 + 1 + 1 + (1 + 2n) + (1 + 1 + 2 + 1 + 1 + 1 + 1)n + 3
    // = 10n+8
}
