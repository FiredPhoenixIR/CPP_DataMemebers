//#include <iostream>
//#include <string>
//#include <exception>
//
//class Car {
//public:
//    Car() : Car(0, 0.0, "default") { } 
//    // default constructor innitialized with another constructor having verify data
//
//    Car(int seats, const std::string& name) : Car(seats, 0.0, name) { }
//
//    Car(int seats, double maxVel, const std::string& name)
//        : seats_(seats)
//        , maxVelocity_(maxVel)
//        , name_(name)
//    {
//        VerifyData();
//    }
//
//    void VerifyData() const {
//        if (seats_ < 0 || seats_ > 1000)
//            throw std::runtime_error("wrong number of seats");
//    }
//
//    // getters and setters:
//    int GetSeats() const { return seats_; }
//    double GetMaxVelocity() const { return maxVelocity_; }
//    std::string GetName() const { return name_; }
//private:
//    int seats_;
//    double maxVelocity_;
//    std::string name_;
//};
//
//int main() {
//    try {
//        Car regularCar{ 4, "a common car" };
//        std::cout << "name: " << regularCar.GetName() << " created... \n";
//
//        Car oldCar{ 30000, 42.5, "super fast but old" };
//        std::cout << "name: " << oldCar.GetName() << " created... \n";
//    }
//    catch (const std::exception& e) {
//        std::cout << "cannot create: " << e.what() << '\n';
//    }
//}
//
//// --  might get a segmentation fault and stack overflow! 
//// This is a recursive call, and the compiler cannot detect it 
//// until the code is executed at runtime.
//class Car {
//public:
//    Car() : Car(0, 0.0, "default") { }
//
//    Car(int seats, const std::string& name) : Car(seats, 0.0, name) { }
//
//    Car(int seats, double maxVel, const std::string& name)
//        : Car(seats, name)
//    {
//    }
//}
//
//// you cannot mix member initialization with calling other constructors.
//Car(int seats, double maxVel, const std::string& name)
//    : maxVelocity_(maxVel), Car(seats, name)
//{
//    VerifyData();
//}
