#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.artemihinnd.Sprint1.Task3.V0.Lib/Tyuiu.artemihinnd.Sprint1.Task3.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testo1
{
	TEST_CLASS(testo1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task3V0* serviceV1 = new Service1();
				int c;
				c = serviceV1->Uslovie(123);


		}
	};
}
