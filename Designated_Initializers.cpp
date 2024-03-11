#include<iostream>

//struct Date {
//    int year;
//    int month;
//    int day;
//
//    static int mode;
//};
//
//Date inFuture{ .year = 2050, .month = 4, .day = 10 };
//
//// . for better readibility 
//
//Date d{ .mode = 10; };             // error, mode is static!
//Date d{ .day = 1, .year = 2010 }; // error, out of order!
//Date d{ 2050, .month = 12 };      // error, mix!

/*
Rules#
The following rules apply to designated initializers:

Designated initializers work only for aggregate initialization, 
so they only support aggregate types.
Designators can only refer to non-static data members.
Designators in the initialization expression must have the same order 
of data members in a class declaration.
Not all data members must be specified in the expression.
You cannot mix regular initialization with designers.
There can only be one designator for a data member
You cannot nest designators.
*/

/*
Advantages of designated initialization
Readability: A designator points to the specific data member, 
so it’s impossible to make mistakes here.
Flexibility: You can skip some data members and rely on default values for others.
Compatibility with C: In C99, it’s popular to use a similar form of initialization 
(although even more relaxed). 
With the C++20 feature, it’s possible to have very similar code and share it.
Standardization: 
Some compilers, like GCC or Clang, already had some extensions for this feature, 
so it’s a natural step to enable it in all compilers.
*/

//#include <iostream>
//#include <string>
//
//struct Product {
//    std::string name_;
//    bool inStock_{ false };
//    double price_ = 0.0;
//};
//
//void Print(const Product& p) {
//    std::cout << "name: " << p.name_ << ", in stock: "
//        << std::boolalpha << p.inStock_ << ", price: "
//        << p.price_ << '\n';
//}
//
//struct Time { int hour; int minute; };
//struct Date { Time t; int year; int month; int day; };
//
//int main() {
//    Product p{ .name_ = "box", .inStock_ {true } };
//    Print(p);
//
//    Date d{ .t {.hour = 10, .minute = 35 }, .year = 2050, .month = 5, .day = 10 };
//    // However, we can’t use “nested” ones, like:
//    // Date d{ .t.hour = 10, .t.minute = 35, .year = 2050, .month = 5, .day = 10 };
//    
//    // pass to a function:
//    Print({ .name_ = "tv", .inStock_ {true }, .price_{100.0} });
//
//    // not all members used:
//    Print({ .name_ = "car", .price_{2000.0} });
//    Print(p);
//}