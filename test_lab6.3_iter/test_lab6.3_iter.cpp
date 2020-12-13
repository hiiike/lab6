#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3_iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab63iter
{
	TEST_CLASS(testlab63iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[3] = {10, 7, 44};
			c = Min(a, 3);
			Assert::AreEqual(c, 7);
		}
	};
}
