#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_5.3/5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double L;
			double e = 2.71;
			L = g(1);
			if (1 > e)
			Assert::AreEqual(L, 0.331248);
		}
	};
}
