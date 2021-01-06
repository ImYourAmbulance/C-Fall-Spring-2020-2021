#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab8\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForLab8
{
	TEST_CLASS(UnitTestForLab8)
	{
	public:
		
		TEST_METHOD(TestSum1)
		{
			int a[] = { 1, 2, 3, 4, 5 };
			Assert::AreEqual(ArrRecSum(a, 5), 15);
		}
		TEST_METHOD(TestMax1)
		{
			int a[] = { 1, 2, 3, 4, 5 };
			Assert::AreEqual(ArrMaxElement(a, 5), 5);
		}
		TEST_METHOD(TestMax2)
		{
			int a[] = { 1, 1, 1, 1, 1 };
			Assert::AreEqual(ArrMaxElement(a, 5), 1);
		}
		TEST_METHOD(TestMax3)
		{
			int a[] = { -10, -2, -99, -2, -34 };
			Assert::AreEqual(ArrMaxElement(a, 5), -2);
		}
		TEST_METHOD(TestZeros1)
		{
			int a[] = { 0, -2, 1, -2, -34 };
			Assert::IsTrue(IsThereZeros(a, 5));
		}
		TEST_METHOD(TestZeros2)
		{
			int a[] = { 1, -2, 1, -2, -34 };
			Assert::IsFalse(IsThereZeros(a, 5));
		}
		TEST_METHOD(TestMedian1)
		{
			int a[] = { 1, 2, 3, 4, 5 };
			Assert::AreEqual(ArrMedian(a, 5), 3.0, 0.1);
		}
		TEST_METHOD(TestMedian2)
		{
			int a[] = { 1, 2, 3, 4, 5, 6 };
			Assert::AreEqual(ArrMedian(a, 6), 3.5, 0.1);
		}
		TEST_METHOD(TestMedian3)
		{
			int a[] = { -2, -3, 1, 15, 41, 3 };
			Assert::AreEqual(ArrMedian(a, 6), 2.0, 0.1);
		}
		//double ArrMedian(int* a, int length)
	};
}
