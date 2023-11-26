#include <iostream>
using namespace std;

class MyClass {   
  public:          
int a( int x ){
cout<<x;
return x;
} 


int b( int y ){
cout<<y;
return y;
} 

};

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) ;
};

Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}


int main() {
  // Create Car objects and call the constructor with different values
 Car obj1("Car", "Bike ",1200);

  // Print values
 cout << obj1.model << "\n";
 
 MyClass pub;
 pub.a(200);
 pub.b(300);


  return 0;
}