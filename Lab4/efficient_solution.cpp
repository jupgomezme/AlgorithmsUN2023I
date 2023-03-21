#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int> &numbers)
{
    long long max_product = 0;   //1
    int n = numbers.size();  //1
    int index_max_1 = -1;   //1
    int index_max_2 = -1;   //1

    for (int i = 0; i < n; ++i)     //1+2n
    {
        int current = numbers[i];   //1
        if (current > numbers[index_max_1])    //1
        {
            index_max_1 = i;    //1
        }
    }

    for (int i = 0; i < n; ++i)     //1+2n
    {
        if (i != index_max_1)
        {
            int current = numbers[i];   //1
            if (current > numbers[index_max_2])   //1
            {
                index_max_2 = i;   //1
            }
        }
    }
    max_product = (long long)numbers[index_max_1] * numbers[index_max_2];    //1
    return max_product;     //1+1+1+1+(1+2n)+(1+1+1)n+(1+2n)+(1+1+1)(n-1)+1=10n+4
}

int main()  //N inst exec by line executed 
{
    int n;  //1
    std::cin >> n;  //1
    std::vector<int> numbers(n);    //n
    for (int i = 0; i < n; ++i)     //1+2n
    {
        std::cin >> numbers[i];     //1
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n"; // 1 + 10n+4 + 1 = 10n + 6
    return 0; //    (4n+3) + (10n+6) = 14n+9
}
