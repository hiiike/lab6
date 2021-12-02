#include <iostream>
#include <string>

using namespace std;

template <typename T>
T Min(const T arr[], const int size);

template <typename T>
void Print(const T arr[], const int size);

int main()
{
    double arr[] = { 1.3, 2.3, 2.7, 7.6, 7.7, -5.4, 5.3, 8.45, 89.78, -56.1 };
    Print(arr, size(arr));
    cout << "Min = " << Min(arr, size(arr)) << endl << endl;

    system("pause");
    return 0;
}

template <typename T>
T Min(const T arr[], const int size)
{
    T Min = arr[0];

    for (int i = 0; i < size; i++)
        if (arr[i] < Min)
            Min = arr[i];

    return Min;
}
template <typename T>
void Print(const T arr[], const int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << "  ";
    cout << endl;
}