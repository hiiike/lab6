#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1_iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab61iter
{
	TEST_CLASS(testlab61iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int r[21]{13,47,79,89,90,43,15,73,68,35,48,17,41,29,46,70,62,17,86,31};
			c = Sum(r, 21);
			Assert::AreEqual(c, 470);
		}
	};
}
