#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_11.4/LAB_11.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Arrange
            map<string, Employee> phoneBook;

            // Act
            Employee emp;
            emp.lastName = "Doe";
            emp.phoneNumber = "01";
            emp.roomNumber = "101";
            phoneBook["01"] = emp;

            // Assert
            Assert::AreEqual(static_cast<size_t>(1), phoneBook.size());
        }
    };
}
