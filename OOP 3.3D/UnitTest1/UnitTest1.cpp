#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 3.3D/Complex_Public.h"
#include "../OOP 3.3D/Complex_Public.cpp"
#include "../OOP 3.3D/Pair.h"
#include "../OOP 3.3D/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex_Public i(0, 0);
			Pair  k1(4), k2(2);

			Assert::AreEqual(i.Diff_1(k1, k2), 2);

		}
	};
}
