#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* r, const int size, const int Low, const int High, int i)
{

    r[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(r, size, Low, High, i + 1);
}
void Print(int* r, const int size, int i)
{
    cout << setw(4) << r[i];
    if (i < size - 1)
        Print(r, size, i + 1);
    else
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
    const int n = 10;
    int a[n];
    int Low = 1;
    int High = 99;
    Create(a, n, Low, High, 0);
    Print(a, n, 0);

    cout << "Max = " << Max(a, n) << endl;
    cout << "Min = " << Min(a, n) << endl;
    system("pause");
    return 0;
}
