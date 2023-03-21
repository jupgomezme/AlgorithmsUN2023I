#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    srand((unsigned)time(NULL));

    for (int j = 0; j < 20; ++j)
    {
        int n = 2 + rand() % 8;
        cout << n << endl;

        int max1 = 0;
        int max2 = 0;

        for (int i = 0; i < n; ++i)
        {
            int current = 1 + rand() % 1000;

            cout << current << '\t';

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
        cout << endl;

        cout << (long long)max1 * max2 << "\n";
    }
    return 0;
}
