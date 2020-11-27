#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* b, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++)
		b[i] = Low + rand() % (High - Low + 1);
}
void Print(int* b, const int size) {
	for (int i = 0; i < size; i++)
		cout << setw(4) << b[i];
	cout << endl;
}

int Count(int* b, const int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (b[i] % 2 == 0 && b[i] != 3) {
			count++;
		}	
	}
	return count;
 }

void Zero(int* b, const int size) {
	for (int i = 0; i < size; i++)
		if (b[i] % 2 == 0 && b[i] != 3)
			b[i] = 0;
}

int Sum(int* b, const int size) {
	int S = 0;
	for (int i = 0; i < size; i++)
		if (b[i] % 2 == 0 && b[i] != 3)
			S += b[i];
	return S;
}

int main() {
	srand((unsigned)time(NULL));
	const int SIZE = 21;
	int b[SIZE];
	int Low = 10;
	int High = 90;
	Create(b, SIZE, Low, High);
	Print(b, SIZE);
	cout << "Sum = " << Sum(b, SIZE) << endl;
	cout << "Count = " << Count(b, SIZE) << endl;
	Zero(b, SIZE);
	Print(b, SIZE);

	return 0;

}