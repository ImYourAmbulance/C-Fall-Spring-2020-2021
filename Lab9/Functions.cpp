#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>	

using namespace std;
void PrintArr(const int* pi, int size) {
	for (int i = 0; i < size; ++i) {
		cout << pi[i] << ' ';
	}
}

void read(int*& a, size_t& n) {
	cout << "Enter size of your array" << endl;
	cin >> n;
	a = new int[n];
	for (size_t i = 0; i < n; ++i) {
		cin >> a[i];
	}
}

int* random_array(size_t n) {
	std::srand(std::time(nullptr));
	int* a = new int[n];
	for (size_t i = 0; i < n; ++i) {
		a[n] = std::rand() % 21;
	}
	return a;
}

int* insert_element(int*& a,int& element,size_t& n) {
	int* b = new int[n + 1];
	int number_of_insert = n / 2 + n % 2;
	for (size_t i = 0; i < n + 1; ++i) {
		if (i < number_of_insert)
			b[i] = a[i];
		if (i > number_of_insert)
			b[i] = a[i - 1];
	}
	b[number_of_insert] = element;
	return b;
}

int* deleting_duplicates(int*& source, size_t& n) {
	int* tmp_arr = new int[n];
	int k;
	int tmp_k = 0;
	for (int i = n - 1; i > 0; --i) {
		k = 0;
		for (int j = i - 1; j > 0; --j) {
			if (source[j] == source[i])
				++k;
		}
		if (k == 0) {
			tmp_arr[tmp_k++] = source[i];
			// check it
		}
	}
	int* result = new int[tmp_k - 1];
	for (int i = tmp_k - 1; i > -1; --i) {
		result[tmp_k - i - 1] = tmp_arr[i];
	}
	return result;
}

bool is_sorted(int*& source, size_t& n) {
	for (int i = 1; i < n; ++i) {
		if (source[i - 1] > source[i])
			return false;
	}
	return true;
}

int binary_search(int*& source, size_t& n, int element, int& m) {
	int l = 0, r = n - 1;
	m = (l + r) / 2;
	while (l <= r) {
		if (source[m] < element)
			l = m + 1;
		if (source[m] > element)
			r = m - 1;
		if (source[m] == element)
			return true;
	}
	return false;
}

int partition(int*& A, size_t lo, int hi) {
	int pivot = A[hi];
	int i = lo;
	for (int j = 0; j < hi; ++j) {
		if (A[j] < pivot) {
			swap(A[i], A[j]);
			++i;
		}
	}
	swap(A[i], A[hi]);
	return i;
}
void quick_sort_rec(int*& A, size_t lo, int hi) {
	if (lo < hi) {
		int p = partition(A, lo, hi);
		quick_sort_rec(A, lo, p - 1);
		quick_sort_rec(A, p + 1, hi);
	}
}
