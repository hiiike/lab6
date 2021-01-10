#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* r, const int size, const int Low, const int High, int i) {
    for (int i = 0; i < size; i++)
        r[i] = Low + rand() % (High - Low + 1);
}

void Print(int* r, const int size, int i) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << r[i];
    cout << endl;
}

int Min(int* a, const int size)
{
    int min = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] < min && a[i] % 2 == 1 && a[i] != 0)
            min = a[i];
    return min;

}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];
    int Low = 0;
    int High = 99;
    Create(a, n, Low, High, 0);
    Print(a, n, 0);

    cout << "Number = " << Min(a, n) << endl;
    system("pause");
    return 0;
}
