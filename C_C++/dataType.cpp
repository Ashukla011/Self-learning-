
#include <iostream>
using namespace std;

int main() {

    int a = 2147483647; // Typically stores 4 bytes (32 bits). Range: -2,147,483,648 to 2,147,483,647
    short b = 32767; // Typically stores 2 bytes (16 bits). Range: -32,768 to 32,767.
    long c = 6; //Typically stores 4 or 8 bytes (32 or 64 bits). Range: -2,147,483,648 to 2,147,483,647 (32-bit) or -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (64-bit).
    float d = 3.14f; // Typically stores 4 bytes (32 bits). Precision: about 7 decimal digits.
    double e = 3.141592653589793; // double: Typically stores 8 bytes (64 bits). Precision: about 15 decimal digits.
    char f = 'A'; // Typically stores 1 byte (8 bits). Range: -128 to 127 (signed) or 0 to 255 (unsigned).
    bool g = true; //bool: Typically stores 1 byte. Values: true or false.

    // wchar_t: Typically stores 2 or 4 bytes (16 or 32 bits), used for wide characters.
    // L'अ': The L before the character means it’s a wide character literal.
    // wchar_t: Can hold a character like 'अ' which can't fit in normal char.
    // wcout: Wide character version of cout (you may need #include <locale> and set locale on some systems).
    // On Windows, wchar_t is usually 2 bytes; on Linux, it's typically 4 bytes.


    // long long:Typically stores 8 bytes (64 bits). Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.
    cout << "int: " << a << endl;
    cout << "short: " << b << endl;
    cout << "long: " << c << endl;
    cout << "float: " << d << endl;
    cout << "double: " << e << endl;
    cout << "char: " << f << endl;
    cout << "bool: " << g << endl;

    // DATA TYPE MEODIFIERS 
    /* int : 4byte - 32 bits 
       long: 8 byte - 64bits
       long long 
    */

    cout << sizeof(int) << endl;
    cout << sizeof(long int ) << endl;
    cout << sizeof(short int ) << endl; // 2byte
    cout << sizeof(long long int  ) << endl;
    cout << sizeof(signed int ) << endl; // it can store positive and negative 
    cout << sizeof(unsigned int ) << endl; // only store positive number range: 0 to 2*32-1 
    return 0;
}

// Void Data Type (void)
// The void data type represents the absence of value. We cannot create a variable of void type. It is used for pointer and functions that do not return any value using the keyword void.


// In Java, char does not typically store just 1 byte (8 bits). Instead:

// ✅ In Java:
// char stores 2 bytes (16 bits).
// It represents a single Unicode character.
// Range: 0 to 65,535 (because it's unsigned in Java).
// Example values: 'A', '1', '@', or even Unicode characters like '\u0905'.


// ⚠️ What you wrote applies to C/C++:

// In C or C++, char typically:
// Stores 1 byte (8 bits).
// The range depends on whether it's signed or unsigned:
// Signed char: −128 to 127


// Primitive Data Types

// Basic building blocks of data.
// Predefined by the language (Java has 8).
// Store actual values directly in memory.
// Fast and memory-efficient.
// Not objects – they don't have methods.

// 🔸 Java's 8 primitive types:
// Type	Description	Example
// int	Whole numbers	int x = 5;
// double	Decimal numbers	double pi = 3.14;
// char	Single character	char ch = 'A';
// boolean	True or false	boolean flag = true;
// byte	Small integer (1 byte)	byte b = 100;
// short	Small integer (2 bytes)	short s = 32000;
// long	Large integer (8 bytes)	long l = 123456789L;
// float	Decimal numbers (4 bytes)	float f = 3.14f;
// 🎯 Non-Primitive (Reference) Data Types
// Created by the programmer or provided by Java (like String, Array, Class, Object, etc.).

// Store references (addresses) to objects in memory, not the actual value.

// Can be complex and of any size.

// Have methods you can use.

// 🔸 Examples:
// Type	Description	Example
// String	Sequence of characters	String name = "John";
// Array	Collection of values	int[] nums = {1,2,3};
// Class	User-defined data type	Person p = new Person();
// Object	Base type of all Java classes	Object obj = new Object();
// 🧠 Simple Analogy:
// Think of primitive types as ingredients (like flour, sugar), and non-primitive types as recipes or dishes made using those ingredients.

// 🔍 Summary:
// Feature	Primitive	Non-Primitive
// Stores	Actual value	Reference (memory address)
// Built-in	Yes	Yes and user-defined
// Memory use	Less	More
// Methods/Functions	No	Yes
// Example	int, char	String, Array, Object
