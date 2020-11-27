#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create_r(int* b, const int size, const int Low, const int High, int i) {
	if (i == size) {
		return;
	}
	b[i] = Low + rand() % (High - Low + 1);
	Create_r(b, size, Low, High, i + 1);
}

void Print_r(int* b, const int size, int i) {
	if (i == size) {
		cout << endl;
		return;
	}
	cout << setw(4) << b[i];
	Print_r(b, size, i + 1);
}

int Count_r(int* b, const int size, int i) {
	if (i == size) {
		return 0;
	}
	if (b[i] % 2 == 0 && b[i] != 3) {
		return Count_r(b, size, i + 1) + 1;
	}
	return Count_r(b, size, i + 1);
}

void Zero_r(int* b, const int size, int i) {
	if (i == size) {
		return;
	}
	if (b[i] % 2 == 0 && b[i] != 3) {
		b[i] = 0;
	}
	Zero_r(b, size, i + 1);
}

int Sum_r(int* b, const int size, int i) {
	if (i == size) {
		return 0;
	}
	if (b[i] % 2 == 0 && b[i] != 3) {
		return Sum_r(b, size, i + 1) + b[i];
	}
	return Sum_r(b, size, i + 1);
}

int main() {
	srand((unsigned)time(NULL));
	const int SIZE = 21;
	int b[SIZE];

	int Low = 10;
	int High = 90;

	Create_r(b, SIZE, Low, High, 0);
	Print_r(b, SIZE, 0);
	cout << "Sum = " << Sum_r(b, SIZE, 0) << endl;
	cout << "Count = " << Count_r(b, SIZE, 0) << endl;
	Zero_r(b, SIZE, 0);
	Print_r(b, SIZE, 0);

	return 0;
}
