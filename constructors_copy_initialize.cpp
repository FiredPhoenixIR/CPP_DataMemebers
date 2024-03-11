//#include <iostream>
//#include <string>
//
//int initA() {
//    std::cout << "initA() called\n";
//    return 1;
//}
//
//std::string initB() {
//    std::cout << "initB() called\n";
//    return "World";
//}
//
//struct SimpleType {
//    int a{ initA() };
//    std::string b{ initB() };
//
//    SimpleType() { }
//    SimpleType(std::string s) : b(std::move(s)) { }
//
//    SimpleType(const SimpleType& other) {
//        std::cout << "copy ctor\n";
//
//        a = other.a;
//        b = other.b;
//    };
//    // better copy ctor to not initialize default values :
//    SimpleType(const SimpleType& other) : a(other.a), b(other.b) {
//        std::cout << "copy ctor\n";
//    };
//    // = 
//    SimpleType(const SimpleType& other) = default;
//
//
//};
//
//int main() {
//    SimpleType t1;
//    std::cout << "SimpleType t2 = t1:\n";
//    SimpleType t2 = t1;
//}
//
///*
//initA() called
//initB() called
//SimpleType t2 = t1:
//initA() called // removed - with better copy ctor
//initB() called // removed - with better
//copy ctor
//*/
//
