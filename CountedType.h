//#pragma once
//
//#include <iostream>
//
//struct CountedType {
//	static inline int classCounter = 0;
//
//	// simple counting... only ctor and dtor implemented...
//	CountedType() { std::cout << "ctor\n"; ++classCounter; }
//	~CountedType() { std::cout << "dtor\n"; --classCounter; }
//
//	// add copy constructor
//	CountedType(const CountedType&) { std::cout << "copy ctor\n"; ++classCounter; }
//	// add move constructor
//	// with move we can steal "guts", but the object will be still alive and its
//	// destructor will be called... so we have to increase the counter
//	CountedType(CountedType&&) noexcept { std::cout << "move ctor\n"; ++classCounter; }
//	// move assignment operator
//	CountedType& operator=(CountedType&&) = default;
//	// assignment operator
//	CountedType& operator=(const CountedType&) { std::cout << "assignment\n"; return *this; }
//};



// Thanks to C++17, we can declare the variable as inline. 
// Then, there’s no need to write a corresponding definition later