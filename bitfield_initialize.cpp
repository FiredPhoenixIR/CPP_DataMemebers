#include <iostream>

// var : bit_count { default_value }.

//struct Type {
//    int value : 4 = 1; // 4bit
//    int second : 4 { 2 };
//};
//
//int main() {
//    Type t;
//    std::cout << t.value << '\n';
//    std::cout << t.second << '\n';
//}

/*
Advantages of NSDMI#
It looks like using NSDMI is a clear winner for Modern C++. 
Here are the main reasons why is it so helpful:

It’s easy to write.
You can be sure that each member is initialized correctly.
The declaration and the default value are in the same place, so it’s easier to maintain.
This also conforms with the rule that every variable should be initialized.
It is especially useful when we have several constructors.
Previously, we would have to duplicate the initialization code 
for members or write a custom method, like InitMembers(), 
that would be called in the constructors.
Now, you can do a default initialization, and the constructors will only do their specific jobs.
*/

/*
Performance: 
When you have performance-critical data structures (for example, a Vector3D class), 
you may want to have an “empty” initialization code. 
You risk having uninitialized data members, 
but you might save several CPU instructions.
(Only until C++14) NSDMI makes a class non-aggregate in C++11. 
See the section about C++14 changes.
Since the default values are in a header file, 
any change can require recompiling dependent compilation units. 
This is not the case if the values are set only in an implementation file.
*/