#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 06.1r/Lab 06.1r.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61r
{
	TEST_CLASS(UnitTest61r)
	{
	public:

		// Тестируем рекурсивную функцию Create
		TEST_METHOD(TestCreate)
		{
			const int size = 10;
			int arr[size];
			int Low = -10, High = 10;

			Create(arr, size, Low, High);

			for (int i = 0; i < size; i++) {
				Assert::IsTrue(arr[i] >= Low && arr[i] <= High, L"Element is out of range");
			}
		}

		// Тестируем рекурсивную функцию ProcessElements для корректного подсчета суммы и количества элементов
		
		
	};
}
