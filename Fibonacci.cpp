#include <iostream>

using namespace std;

int main()
{
    int n = 15; // Номер числа Фибоначчи
    int *ar = new int[n + 1];
    ar[0] = 0;
    ar[1] = 1;
    for (int i = 2; i <= n; i++) 
    {
        ar[i] += ar[i - 1] + ar[i - 2];
    }

    cout << ar[n - 1];
}

