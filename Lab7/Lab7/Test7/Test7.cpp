#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include "..\Lab7\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test7
{
	TEST_CLASS(Test7)
	{
	public:
		
		TEST_METHOD(TestArrSum)	
		{ 
			int a[] = { 1, 2, 3, 4 };
			Assert::AreEqual(10.0, ArrSum(a, 4));
		}

		TEST_METHOD(TestVectorLength)
		{
			int a[] = { 3, 4 };
			Assert::AreEqual(VectorLength(a, 2), 5.0);
		}
		TEST_METHOD(TestVectorSimilarity)
		{
			int a[] = { 1, 0 };
			int b[] = { 0, 1 };
			int c[] = { 0, 0 };
			Assert::AreEqual(VectorSimilarity(a, b, c, 2), 0.0);
		}
	};
}
