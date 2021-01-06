#include <iostream>
using namespace std;


double ArrSum(const int* a, const size_t size) {
	double sum = 0;
	for (size_t i = 0; i < size; ++i) {
		sum += a[i];
	}
	return sum;
}

void ArrMult(const int* a, const int* b, int* c, size_t size) {
	for (size_t i = 0; i < size; ++i) {
		c[i] = a[i] * b[i];
	}
}

double VectorLength(const int* a, size_t size) {

	double pre_root = 0;
	for (size_t i = 0; i < size; ++i) {
		pre_root += a[i] * a[i];
	}
	return sqrt(pre_root);
}

double VectorSimilarity(const int* a, const int* b, int* c, size_t size) {
	ArrMult(a, b, c, size);
	double ab = ArrSum(c, size);
	//cos(a* b) = ab / |a|*|b|
	double ma = VectorLength(a, size);
	double mb = VectorLength(b, size);
	return ab / ma / mb;
}

void MatrixMult(const int* a, const int* b, int* res, size_t size) {
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			int current_element = 0;
			for (short int x = 0; x < size; ++x) {
				current_element += a[i * size + x] * b[x * size + j];
			}
			res[i * size + j] = current_element;
		}
	}
}

void MatrixReverse(int* a, int* res, size_t size) {
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			int tmp = a[j * size + i]; 
			a[i * size + j] = tmp;
		}
	}
}

void MatrixPrint(int* a, size_t size) {
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			cout << a[i * size + j] << " ";
		}
		cout << endl;
	}
}


int main() {
	return 0;
}


