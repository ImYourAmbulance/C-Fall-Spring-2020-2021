#pragma once

double ArrSum(const int* a, const size_t size);

void ArrMult(const int* a, const int* b, int* c, size_t size);

double VectorLength(const int* a, size_t size);

double VectorSimilarity(const int* a, const int* b, int* c, size_t size);

void MatrixMult(const int* a, const int* b, int* res, size_t size);

void MatrixReverse(int* a, int* res, size_t size);

void MatrixPrint(int* a, size_t size);