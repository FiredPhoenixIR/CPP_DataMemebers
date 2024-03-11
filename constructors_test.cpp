//#include<iostream>
//#include<string>
//
//class MyPets {
//private:
//	std::string name;
//	std::string owner;
//	int age;
//public:
//
//	MyPets() : name(""), owner("Mahdi"), age(0) {}
//	MyPets(std::string name_, std::string owner_, int age_) : 
//		name(name_),owner(owner_),age(age_) {}
//
//	MyPets(const MyPets& other) = default;
//
//	MyPets(MyPets&& other) noexcept :
//		name(std::move(other.name)),
//		owner(std::move(other.owner)),
//		age(other.age) {
//		other.age = 0; // Reset the age of the moved-from object
//	}
//
//	MyPets& operator=(const MyPets& other) {
//		if (this != &other) {
//			name = other.name;
//			owner = other.owner;
//			age = other.age;
//			}
//		return *this;
//	}
//
//	MyPets& operator=(MyPets&& other) noexcept{
//		if (this != &other) {
//			name = std::move(other.name);
//			owner = std::move(other.owner);
//			age = other.age;
//		}
//		return *this;
//	}
//
//	// getters and setters:
//    int GetAge() const { return age; }
//	std::string GetOwner() const { return owner; }
//	std::string GetName() const { return name; }
//};
//
//int main() {
//	MyPets firstobj;
//	std::cout << firstobj.GetAge() << std::endl << firstobj.GetName() <<
//		std::endl << firstobj.GetOwner() << std::endl;
//	MyPets secondobj("snow", "mahdi", 7);
//	MyPets thirdobj{ std::move(secondobj) };
//	firstobj = thirdobj;
//	std::cout << "after operations" << std::endl;
//	std::cout << firstobj.GetAge() << std::endl << firstobj.GetName() <<
//		std::endl << firstobj.GetOwner() << std::endl;
//	MyPets* sobj = &secondobj;
//	std::cout << "check second" << std::endl;
//	std::cout << sobj->GetAge() << std::endl << secondobj.GetName() <<
//		std::endl << secondobj.GetOwner() << std::endl;
//}
