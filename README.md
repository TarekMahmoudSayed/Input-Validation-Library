# C++ Input Validation Library – clsInputValidate

A reusable C++ class designed to handle user input validation and make Console Applications safer and easier to work with.

This class is part of my personal **C++ Utility Library**, where I collect and organize functions that I have built and practiced throughout my C++ learning journey.

---

## 📌 About

`clsInputValidate` provides a collection of reusable functions for validating numbers, dates, and user input.

Instead of writing the same validation logic repeatedly in every project, the functions are organized inside one reusable class.

The idea behind this library is simple:

> Build useful functions piece by piece, then organize them together like LEGO. 🧱

---

## ✨ Features

### 🔢 Number Validation

Check whether a number is within a specific range.

The class supports multiple data types using **Function Overloading**:

* `short`
* `int`
* `float`
* `double`

Example:

```cpp
clsInputValidate::IsNumberBetween(50, 1, 100);
```

---

### 📅 Date Validation

Validate whether a date exists within a specific date range.

`IsDateBetween()` supports both normal and reversed date ranges.

```cpp
clsInputValidate::IsDateBetween(Date, From, To);
```

The class also provides date validation through:

```cpp
clsInputValidate::IsValidDate(Date);
```

---

### ⌨️ Safe Integer Input

Read an integer from the user while handling invalid input.

```cpp
int Number = clsInputValidate::ReadIntNumber();
```

If the user enters an invalid value, the input stream is cleared and the invalid input is removed before asking again.

---

### 🔢 Safe Double Input

Read a `double` value while handling invalid input.

```cpp
double Number = clsInputValidate::ReadDblNumber();
```

---

### 📏 Number Range Validation

Read an integer or double that must be inside a specific range.

```cpp
int Number = clsInputValidate::ReadIntNumberBetween(1, 100);
```

```cpp
double Number = clsInputValidate::ReadDblNumberBetween(0.0, 100.0);
```

The user will continue to be asked for input until a valid value within the required range is entered.

---

## 🧠 Concepts Practiced

This project helped me practice and apply several C++ concepts:

* Object-Oriented Programming (OOP)
* Static Member Functions
* Function Overloading
* Input Validation
* Input Stream Handling
* `cin.clear()`
* `cin.ignore()`
* `numeric_limits`
* Working with Custom Classes
* Code Reusability
* Code Organization

---

## 📂 Project Structure

```text
Input-Validation-Library/
│
├── clsInputValidate.h
├── clsDate.h
├── clsString.h
└── main.cpp
```

---

## 🚀 Usage

Include the required header:

```cpp
#include "clsInputValidate.h"
```

### Check a Number Range

```cpp
int Number = 50;

if (clsInputValidate::IsNumberBetween(Number, 1, 100))
    cout << "Number is valid";
```

### Read an Integer

```cpp
int Number = clsInputValidate::ReadIntNumber();
```

### Read an Integer Within a Range

```cpp
int Number = clsInputValidate::ReadIntNumberBetween(1, 100);
```

### Read a Double

```cpp
double Number = clsInputValidate::ReadDblNumber();
```

### Read a Double Within a Range

```cpp
double Number = clsInputValidate::ReadDblNumberBetween(0.0, 100.0);
```

### Validate a Date

```cpp
if (clsInputValidate::IsValidDate(Date))
    cout << "Valid Date";
```

### Check Whether a Date Is Between Two Dates

```cpp
if (clsInputValidate::IsDateBetween(Date, From, To))
    cout << "Date is within the range";
```

---

## 🧪 Testing

The project includes a `main.cpp` test program that demonstrates and tests the functionality of `clsInputValidate`.

The tests cover:

* `IsNumberBetween()` with different data types
* Valid and invalid number ranges
* `IsDateBetween()`
* Normal date ranges
* Reversed date ranges
* Valid and invalid dates
* `ReadIntNumber()`
* `ReadDblNumber()`
* `ReadIntNumberBetween()`
* `ReadDblNumberBetween()`
* Invalid input handling
* Input stream recovery

The goal of the testing program is to verify the behavior of the class and demonstrate how its functions can be used in real Console Applications.

---

## 🔗 Dependencies

This class currently works with:

* `clsDate`
* `clsString`

Make sure the required header files are available in the project.

---

## 📚 Part of My C++ Learning Journey

This project is another step in my journey of building reusable C++ components.

Many of the functions in this class were created and practiced individually while learning C++. I am now collecting them and organizing them into reusable classes that can be used in future projects.

With every class, I'm trying to improve not only my coding skills, but also my understanding of:

**How to write reusable code, how to organize it, and how to build upon it.**

---

## 🔮 Future Improvements

Some possible improvements for future versions:

* Add more input validation functions.
* Support additional data types.
* Add string validation.
* Improve date validation utilities.
* Add more reusable helper functions.
* Improve const-correctness.
* Refactor the implementation as the library grows.

---

## 👨‍💻 Author

**Tarek Mahmoud Sayed**

Computer Science & AI Student

C++ | OOP | Data Structures | Algorithms | Competitive Programming

---

⭐ If you find this project useful, feel free to star the repository.
