//#include <iostream>
//#include <string>
//
//class Car {
//public:
//    Car(int seats, double maxVel, const std::string& name)
//        : seats_(seats)
//        , maxVelocity_(maxVel)
//        , name_(name)
//    { }
//    Car(const std::string& name) : Car(0, 0.0, name) { }
//
//    int GetSeats() const { return seats_; }
//    double GetMaxVelocity() const { return maxVelocity_; }
//    std::string GetName() const { return name_; }
//protected:
//    int seats_;
//    double maxVelocity_;
//    std::string name_;
//};
//
//class PowerCar : public Car {
//public:
//    using Car::Car;
//    // This tells the compiler that it can use all constructors from the base class.
//
//    // Without this feature, we’d have to write constructors for PowerCar and 
//    // forward the parameters to the base classes.For example :
//    // class PowerCar : public Car {
//    // public:
//    // PowerCar(int seats, double maxVel, const std::string& name) : Car(seats, maxVel, name) { }
//    // ...
//
//
//    void EnableEngineBoost() { std::cout << "adding more power to " << name_ << '\n'; }
//};
//
//int main() {
//    PowerCar powCar{ 1, 700.0, "accelerated car" };
//    powCar.EnableEngineBoost();
//    PowerCar superCar{ "super car" };
//    superCar.EnableEngineBoost();
//}
//
///*
//std::string s{ "Hello World" };
//std::string other = s;
//A constructor is called for s, and then a copy constructor is called to create other.
//*/