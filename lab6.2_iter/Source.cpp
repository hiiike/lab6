#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i) {
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size, int i) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int Max(int* a, const int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
int Min(int* a, const int size)
{
    int min = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}

int main()
{
    srand((unsigned)time(NULL));
    int const n = 10;
    int Low = 1;
    int High = 50;
    int a[n];
    Create(a, n, Low, High, 0);
    Print(a, n, 0);
    cout << "Max = " << Max(a, n) << endl;
    cout << "min = " << Min(a, n) << endl;
    system("pause");
    return 0;
}
