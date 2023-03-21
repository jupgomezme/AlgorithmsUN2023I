#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int> &numbers, long long &execints)
{
    long long max_product = 0; // 1
    execints++;
    int n = numbers.size(); // 1
    execints++;
    int index_max_1 = -1; // 1
    execints++;
    int index_max_2 = -1; // 1
    execints++;

    execints++;
    for (int i = 0; i < n; ++i) // 1+2n
    {
        execints += 2;

        execints++;
        int current = numbers[i]; // 1
        execints++;
        if (current > numbers[index_max_1]) // 1
        {
            execints++;
            index_max_1 = i; // 1
        }
    }

    execints++;
    for (int i = 0; i < n; ++i) // 1+2n
    {
        execints += 2;

        execints++;
        if (i != index_max_1)
        {
            execints++;
            int current = numbers[i];
            // 1
            execints++;
            if (current > numbers[index_max_2]) // 1
            {
                index_max_2 = i; // 1
                execints++;
            }
        }
    }

    execints++;
    max_product = (long long)numbers[index_max_1] * numbers[index_max_2]; // 1
    std::cout << "#Instructions: " << execints << std::endl;
    return max_product; // 1+1+1+1+(1+2n)+(1+1+1)n+(1+2n)+(1+1+1)(n-1)+1=10n+4
}

int main() // N inst exec by line executed
{
    long long execints = 0LL;

    int n; // 1
    execints++;

    std::cin >> n; // 1
    execints++;

    std::vector<int> numbers(n); // n
    execints += n;

    execints++;
    for (int i = 0; i < n; ++i) // 1+2n
    {
        execints += 2;

        std::cin >> numbers[i]; // 1
        execints++;
    }

    execints += 2;
    std::cout << MaxPairwiseProduct(numbers, execints) << "\n"; // 1 + 10n+4 + 1 = 10n + 6
    return 0;                                                   //    (4n+3) + (10n+6) = 14n+9
}
