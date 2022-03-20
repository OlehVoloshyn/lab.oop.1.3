#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.3/Money.cpp"
#include "../lab1.3/Money.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money p;
			Money a;
			a.SetUah(9);
			Money a1;
			a1.SetUah(5);
			a1.SetCoin(50);
			Money a2;
			a2.SetUah(3);
			a2.SetCoin(50);
			p = Add(a1, a2);

			Assert::AreEqual(p, a);

		}
	};
}
