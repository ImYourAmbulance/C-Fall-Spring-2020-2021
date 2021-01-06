#pragma once
void PrintArr(const int* pi, int size);

void read(int*& a, size_t& n);

int* random_array(size_t n);

int* insert_element(int*& a, int& element, size_t& n);

int* deleting_duplicates(int*& source, size_t& n);

bool is_sorted(int*& source, size_t& n);

int binary_search(int*& source, size_t& n, int element, int& m);

int partition(int*& A, size_t lo, int hi);

void quick_sort_rec(int*& A, size_t lo, int hi);