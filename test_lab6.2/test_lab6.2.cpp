#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2_iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab62
{
	TEST_CLASS(testlab62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[2]{2 , 4};
			c = Max(a, 2);
			Assert::AreEqual(c, 4);
		}
	};
}
