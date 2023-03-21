#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

long long MaxPairwiseProduct(const std::vector<int> &numbers)
{
    long long max_product = 0;
    int n = numbers.size();
    int index_max_1 = -1;
    int index_max_2 = -1;

    for (int i = 0; i < n; ++i)
    {
        int current = numbers[i];
        if (current > numbers[index_max_1])
        {
            index_max_1 = i;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (i != index_max_1)
        {
            int current = numbers[i];
            if (current > numbers[index_max_2])
            {
                index_max_2 = i;
            }
        }
    }
    max_product = (long long)numbers[index_max_1] * numbers[index_max_2];
    return max_product;
}

void coutInput(const std::vector<int> &numbers)
{
    int size = numbers.size();
    cout << size << endl;
    for (int i = 0; i < numbers.size(); ++i)
    {
        cout << numbers[i] << ' ';
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    for (int j = 0; j < 20; ++j)
    {
        int n = 1 + rand() % 10;

        vector<int> numbers(n);

        for (int i = 0; i < n; ++i)
        {
            int new_number = 1 + rand() % 1000;
            numbers[i] = new_number;
        }

        coutInput(numbers);

        std::cout << MaxPairwiseProduct(numbers) << endl;
    }
    return 0;
}
