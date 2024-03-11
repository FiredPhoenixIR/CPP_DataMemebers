// a header file, C++17:

//struct OtherType {
//    static inline int classCounter = 0;
//
//    // ...
//};

/*
The compiler guarantees that there’s precisely one definition of this static variable 
for all translation units that include the class declaration. 
Inline variables remain static class variables 
so that they will be initialized before the main() function is called.
*/