//#include<iostream>
//
//#include <iostream>
//#include <string>
//
//class Car {
//public:
//    Car() : seats_(0), maxVelocity_(0.0), name_("default") { }
//
//    Car(int seats, double maxVel, const std::string& name)
//        : seats_(seats)
//        , maxVelocity_(maxVel)
//        , name_(name)
//    {
//        std::cout << "Ctor for \"" << name_ << "\"\n";
//    }
//
//    Car(const Car& other)
//        : seats_(other.seats_)
//        , maxVelocity_(other.maxVelocity_)
//        , name_(other.name_)
//    {
//        std::cout << "Copy ctor for \"" << name_ << "\"\n";
//    }
//
//    Car(Car&& other)
//        : seats_(other.seats_)
//        , maxVelocity_(other.maxVelocity_) // no need to move built-in types...
//        , name_(std::move(other.name_))    // move string member...
//    {
//        std::cout << "Move ctor for \"" << name_ << "\"\n";
//    }
//
//    Car& operator=(const Car& other) {
//        if (this != &other) {
//            seats_ = other.seats_;
//            maxVelocity_ = other.maxVelocity_;
//            name_ = other.name_;
//            std::cout << "Assignment for \"" << name_ << "\"\n";
//        }
//        return *this;
//    }
//
//    Car& operator=(Car&& other) noexcept { // make it exception free
//        if (this != &other) {
//            seats_ = other.seats_;
//            maxVelocity_ = other.maxVelocity_;
//            name_ = std::move(other.name_);
//            std::cout << "Move Assignment for \"" << name_ << "\"\n";
//        }
//        return *this;
//    }
//
//    // getters and setters:
//    int GetSeats() const { return seats_; }
//    double GetMaxVelocity() const { return maxVelocity_; }
//    std::string GetName() const { return name_; }
//
//private:
//    int seats_;
//    double maxVelocity_;
//    std::string name_;
//};
//
//int main() {
//    Car oldCar{ 3, 42.5, "old car" };
//    Car another{ oldCar };
//    Car newCar{ 1, 50.0, "new car" };
//    another = newCar;
//    Car stealedCar{ std::move(newCar) };
//    // a call to std::move(), which marks objects as R-value references, 
//    // This means that those objects are not important later and we can “steal” from them
//    // now we stole the name, so it should be empty...
//    std::cout << "new car after std::move: \"" << newCar.GetName() << "\"\n";
//    std::cout << "new car after std::move: \"" << newCar.GetMaxVelocity() << "\"\n";
//    std::cout << "new car after std::move: \"" << newCar.GetSeats() << "\"\n";
//    std::cout << "oldCar after std::move: \"" << oldCar.GetName() << "\"\n";
//    std::cout << "another after std::move: \"" << another.GetName() << "\"\n";
//    std::cout << "stealedCar after std::move: \"" << stealedCar.GetName() << "\"\n";
//    stealedCar = std::move(oldCar);
//
//    // now we stole the name, so it should be empty...
//    std::cout << "new car after std::move: \"" << oldCar.GetName() << "\"\n";
//}

// copy - ClassName(const ClassName&);
// It’s used when you create an object using a variable of the same type
// Implementing a copy constructor might be necessary 
// when your class has data members that cannot be shallow copied, 
// like pointers, resource ids (like file handles), and many others.

// move - ClassName(ClassName&&);
// Move constructors take R-value references && of the same type

// Experiment exp{ 42, 100 }, anotherExp;
// Experiment finalExp{ exp + anotherExp }; // move constructor called for the temporary!

/*
If your class uses primitive types or types from the Standard Library, 
there’s no need to write copy or move constructors in most cases. 
The compiler creates a default implementation for those special member functions for you.
*/

/*
Experiment exp;
Experiment other { exp };  // copy constructor called!
Experiment second = other; // copy ctor called!
other = exp;               // assignment operator called!
// When an entity already exists, the program runs an assignment operation

*/

/*
Experiment exp { 42, 100 }, anotherExp;
Experiment finalExp { exp + anotherExp }; // move constructor called for the temporary!
finalExp = exp + anotherExp;              // move assignment called
*/