#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab6.1_rec\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab61rec
{
	TEST_CLASS(testlab61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int r[21]{46,75,45,12,53,51,28,65,27,67,76,11,24,45,26,59,87,18,76,37,15};
			c = Sum_r(r, 21, 0);
			Assert::AreEqual(c, 943);
		}
	};
}
