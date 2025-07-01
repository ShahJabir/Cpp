// A simple C++ program that prints "Hello World!" and anatomy of whole program.
// Author: Shah Jabir Taqi
// Date: 2025-07-01
// License: MIT License
// GitHub: https://github.com/ShahJabir/Cpp

// Import the iostream library for input and output operations using include preprocessor directive.
#include <iostream>

// Use the standard namespace to avoid prefixing standard library names with std::
/*
 namespace is a declarative region that provides a scope to the identifiers (variables, functions, classes, etc.) inside it. 
 C++ standard library is encapsulated in the std namespace.
*/
using namespace std;

// The main function is the entry point of the program.
int main()
{
	// Output "Hello World!" to the console using cout, which is an object of ostream class.
    cout << "Hello World!\n";

	// return 0; indicates that the program has executed successfully.
	// In C++, you have to return something from any function that has a return type other than void.
	return 0;
}