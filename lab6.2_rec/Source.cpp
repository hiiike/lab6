#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create_r(int* a, const int size, const int Low, const int High, int i) {
    if (i == size) {
        return;
    }
    a[i] = Low + rand() % (High - Low + 1);
    Create_r(a, size, Low, High, i + 1);
}

void Print_r(int* a, const int size, int i) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << a[i];
    Print_r(a, size, i + 1);
}

int Max(int* a, const int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++)
    {

        if (a[i] > max) {
            max = a[i];
        }

    }
    return max;
}

int Min(int* a, const int size)
{
    int min = a[0];
    for (int i = 1; i < size; i++)
    {

        if (a[i] < min) {
            min = a[i];
        }

    }
    return min;
}


int main()
{
    srand((unsigned)time(NULL));
    int const n = 10;
    int Low = 1;
    int High = 50;
    int a[n];
    Create_r(a, n, Low, High, 0);
    Print_r(a, n, 0);
    cout << "Max = " << Max(a, n) << endl;
    cout << "Min = " << Min(a, n) << endl;
    system("pause");
    return 0;
}
