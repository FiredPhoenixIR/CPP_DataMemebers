//#include <iostream>
//#include <string>
//
//class Car {
//public:
//    Car() { }
//
//    int GetSeats() const { return seats_; }
//    double GetMaxVelocity() const { return maxVelocity_; }
//    std::string GetName() const { return name_; }
//
//private:
//    int seats_ = 0;
//    double maxVelocity_ = 0.0;
//    std::string name_{ "default" };
//};
//
///*
//the variables are assigned their default values in the place of being declared individually. 
//There’s no need to set values inside a constructor. 
//It’s much better than using a default constructor 
//because it brings declaration and initialization code together
//The feature is called non-static data member initialization, or NSDMI in short.
//*/
//
//int main() {
//    Car oldCar;
//    std::cout << "seats: " << oldCar.GetSeats() << '\n';
//    std::cout << "velocity: " << oldCar.GetMaxVelocity() << '\n';
//    std::cout << "name: " << oldCar.GetName() << '\n';
//}
//
//// to check memebr initialize
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
//    return "Hello";
//}
//
//struct SimpleType {
//    int a{ initA() };
//    std::string b{ initB() };
//
//    SimpleType() { }
//    SimpleType(int x) : a(x) { }
//};
//
//int main() {
//    std::cout << "SimpleType t10\n";
//    SimpleType t0;
//    std::cout << "SimpleType t1(10)\n";
//    SimpleType t1(10);
//}
//
//// expands to : 
//struct SimpleType {
//int a;
//std::string b;
//
//SimpleType() : a(initA()), b(initB()) { }
//SimpleType(int x) : a(x), b(initB()) { }
//};