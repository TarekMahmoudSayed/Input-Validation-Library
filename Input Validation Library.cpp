#include <iostream>
#include <limits>
#include "clsInputValidate.h"

using namespace std;

void TestNumberBetween()
{
    cout << "\n========== Test IsNumberBetween ==========\n";

    cout << "int 50 between 1 and 100: "
         << (clsInputValidate::IsNumberBetween(50, 1, 100) ? "True" : "False") << endl;

    cout << "int 150 between 1 and 100: "
         << (clsInputValidate::IsNumberBetween(150, 1, 100) ? "True" : "False") << endl;

    cout << "short 5 between 1 and 10: "
         << (clsInputValidate::IsNumberBetween((short)5, (short)1, (short)10) ? "True" : "False") << endl;

    cout << "float 5.5 between 1.0 and 10.0: "
         << (clsInputValidate::IsNumberBetween(5.5f, 1.0f, 10.0f) ? "True" : "False") << endl;

    cout << "double 25.5 between 10.0 and 30.0: "
         << (clsInputValidate::IsNumberBetween(25.5, 10.0, 30.0) ? "True" : "False") << endl;
}


void TestDateBetween()
{
    cout << "\n========== Test IsDateBetween ==========\n";

    clsDate From(1, 1, 2025);
    clsDate To(31, 12, 2025);

    clsDate Date1(15, 6, 2025);
    clsDate Date2(1, 1, 2025);
    clsDate Date3(31, 12, 2025);
    clsDate Date4(1, 1, 2026);

    cout << "15/6/2025 between 1/1/2025 and 31/12/2025: "
         << (clsInputValidate::IsDateBetween(Date1, From, To) ? "True" : "False") << endl;

    cout << "1/1/2025 between 1/1/2025 and 31/12/2025: "
         << (clsInputValidate::IsDateBetween(Date2, From, To) ? "True" : "False") << endl;

    cout << "31/12/2025 between 1/1/2025 and 31/12/2025: "
         << (clsInputValidate::IsDateBetween(Date3, From, To) ? "True" : "False") << endl;

    cout << "1/1/2026 between 1/1/2025 and 31/12/2025: "
         << (clsInputValidate::IsDateBetween(Date4, From, To) ? "True" : "False") << endl;

    cout << "\nTesting reversed range:\n";

    cout << "15/6/2025 between 31/12/2025 and 1/1/2025: "
         << (clsInputValidate::IsDateBetween(Date1, To, From) ? "True" : "False") << endl;
}


void TestValidDate()
{
    cout << "\n========== Test IsValideDate ==========\n";

    clsDate ValidDate(15, 6, 2025);
    clsDate InvalidDate(31, 2, 2025);

    cout << "15/6/2025: "
         << (clsInputValidate::IsValideDate(ValidDate) ? "Valid" : "Invalid") << endl;

    cout << "31/2/2025: "
         << (clsInputValidate::IsValideDate(InvalidDate) ? "Valid" : "Invalid") << endl;
}


void TestReadIntNumber()
{
    cout << "\n========== Test ReadIntNumber ==========\n";

    cout << "Enter an integer: ";

    int Number = clsInputValidate::ReadIntNumber();

    cout << "You entered: " << Number << endl;
}


void TestReadDoubleNumber()
{
    cout << "\n========== Test ReadDblNumber ==========\n";

    cout << "Enter a double number: ";

    double Number = clsInputValidate::ReadDblNumber();

    cout << "You entered: " << Number << endl;
}


void TestReadIntNumberBetween()
{
    cout << "\n========== Test ReadIntNumberBetween ==========\n";

    cout << "Enter a number between 1 and 100: ";

    int Number = clsInputValidate::ReadIntNumberBetween(
        1,
        100,
        "Invalid! Please enter a number between 1 and 100: "
    );

    cout << "Valid Number: " << Number << endl;
}


void TestReadDoubleNumberBetween()
{
    cout << "\n========== Test ReadDblNumberBetween ==========\n";

    cout << "Enter a number between 0 and 100: ";

    double Number = clsInputValidate::ReadDblNumberBetween(
        0,
        100,
        "Invalid! Please enter a number between 0 and 100: "
    );

    cout << "Valid Number: " << Number << endl;
}


int main()
{
    cout << "=============================================\n";
    cout << "       clsInputValidate Test Program\n";
    cout << "=============================================\n";

    TestNumberBetween();

    TestDateBetween();

    TestValidDate();

    TestReadIntNumber();

    TestReadDoubleNumber();

    TestReadIntNumberBetween();

    TestDoubleNumberBetween();

    cout << "\n=============================================\n";
    cout << "          All Tests Completed\n";
    cout << "=============================================\n";

    return 0;
}
