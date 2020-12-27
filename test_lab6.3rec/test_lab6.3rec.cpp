#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3_rec/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab63rec
{
	TEST_CLASS(testlab63rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[3] = { 10, 7, 44 };
			c = Min(a, 3);
			Assert::AreEqual(c, 7);
		}
	};
}
