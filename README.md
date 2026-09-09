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

Supports multiple data types using **Function Overloading**:

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

The function supports both cases:

```text
From → To
To   → From
```

It also provides a function to check whether a date itself is valid.

Example:

```cpp
clsInputValidate::IsDateBetween(Date, From, To);
```

---

### ⌨️ Safe Integer Input

Read an integer from the user while handling invalid input.

```cpp
int Number = clsInputValidate::ReadIntNumber();
```

If the user enters an invalid value, the input is cleared and the user is asked to enter the value again.

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
* Exception-safe input handling
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
if (clsInputValidate::IsValideDate(Date))
    cout << "Valid Date";
```

### Check Whether a Date Is Between Two Dates

```cpp
if (clsInputValidate::IsDateBetween(Date, From, To))
    cout << "Date is within the range";
```

---

## 🧪 Testing

A `main.cpp` file can be used to test and demonstrate the available functions.

The class can be tested with:

* Different integer values
* Different double values
* Valid and invalid user input
* Numbers inside and outside a specific range
* Valid and invalid dates
* Dates between two dates
* Reversed date ranges

---

## 🔗 Dependencies

This class currently works with:

* `clsString`
* `clsDate`

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
