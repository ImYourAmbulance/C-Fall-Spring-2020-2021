#include <iostream>
using namespace std;

int ArrRecSum(int* a, int length) {
	if (length == 1) {
		return a[0];
	}
	return (a[0] + ArrRecSum(a + 1, length - 1));
}

void ArrSort(int* a, int length, int i = 0) {
	if (i >= length) {
		return;
	}
	int temp;
	for (int j = length - 1; j > i; --j) {
		if (a[j] < a[j - 1]) {
			temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
		}
	}
	ArrSort(a, length, i + 1);
}

double ArrMedian(int* a, int length) {
	ArrSort(a, length);
	return (length % 2 == 1) ? a[length / 2] : (a[length / 2] + a[(length / 2) - 1]) / 2.0;
}
 
bool IsThereZeros(int* a, int length) {
	if (length == 1) {
		return a[0] == 0;
	}
	return ((a[0] == 0) || IsThereZeros(a + 1, length - 1));
}

int ArrMaxElement(int* a, int length) {
	if (length == 1) {
		return a[0];
	}
	return (a[0] > ArrMaxElement(a + 1, length - 1)) ? a[0] : ArrMaxElement(a + 1, length - 1);
}

int main() {
	
	return 0;
}