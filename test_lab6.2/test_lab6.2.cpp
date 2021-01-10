#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2_iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab62rec
{
	TEST_CLASS(testlab62rec)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int c;
			int b;
			int q[4] = { 3, 50, 4, 9 };
			int a[5] = { 1, 10, 2, 5, 11 };
			b = Min(q, 4);
			c = Max(a, 5);
			Assert::AreEqual(c, 11);
			Assert::AreEqual(b, 3);
		}
	};
}

