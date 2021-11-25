#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-7.3(it)\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 3;
			int n = 4;
			int** a = new int* [k];
			for (int i = 0; i < k; i++)
				a[i] = new int[n];

			int S = Zero(a, k, 1);
			Assert::AreEqual(S, 0);


		}
	};
}
