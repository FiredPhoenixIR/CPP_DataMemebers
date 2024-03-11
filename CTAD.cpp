/*

Class Template Argument Deduction (CTAD) is a feature introduced in C++17 
that allows the compiler to deduce template arguments for a class template 
from its constructor arguments. 
This feature simplifies the syntax when working with class templates, 
making code more concise and readable.
*/

// Class template
//template<typename T>
//class Box {
//public:
//    T value_;
//    Box(T value) : value_(value) {}
//};
//
//// Using CTAD
//auto box = Box{ 42 }; // Compiler deduces the template argument as int
//
//#include<vector>
//std::vector numbers{ 1.1f, 2.2f, 3.3f };
//std::vector<float> numbers2{ 1.1f, 2.2f, 3.3f };
