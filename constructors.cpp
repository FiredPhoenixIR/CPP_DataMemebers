//#include<iostream>
//
//class Experiment {
//public:
//    Experiment() : a_(0), b_(10) { } // a default constructor
//    Experiment(int a, int b) : a_(a), b_(b) { 
//        std::cout << "Experiment: " << a_ << ", " << b_ << '\n';
//        if (a_ < 0)
//            throw std::runtime_error{ R"(the first argument must be a positive value!)" };
//        // R" makes it raw string
//        // In raw strings, escape sequences are not interpreted. 
//        // They are treated as literal characters.
//        // Raw strings are particularly useful when dealing with regular expressions, 
//        // file paths, or any other strings that involve a lot of backslashes.
//    }
//
//private:
//    int a_;
//    int b_;
//};
//
//// It’s important to remember that 
//// the compiler will initialize data members in the order they appear in the class declaration, 
//// not in the initializer list.
//// constructor cannot return any values
//
//int main() {
//    Experiment exp;                 // calls the default constructor
//    Experiment amazingExp(10, 100); // calls the constructor with two arguments
//    Experiment anotherExp{ 42, 42 }; // another call using brace initialization {}
//
//    try {
//        Experiment exp2(10, 10);
//        Experiment wrong(-100, 1);
//    }
//    catch (const std::exception& ex) {
//        std::cout << "Error - " << ex.what() << '\n';
//    }
//    return 0;
//}