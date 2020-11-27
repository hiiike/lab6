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
			int r[21]{31,510,39,30,23,85,13,43,13,67,40,65,14,69,51,40,85,38,80,66,64};
			c = Sum_r(r, 21, 2.);
			Assert::AreEqual(c, 372);
		}
	};
}
