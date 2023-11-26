#include <iostream>
#include <cmath>
using namespace std;

class SquareRoot {
    double squareRoot, input; 
    

public:
    void Input() {
        cout << "Enter a number: ";
        cin >> input;
    }

    void calculate() {
        squareRoot = sqrt(input);
    }

    void Result() {
        cout << "Square Root is = " << squareRoot << endl;
    }
};

int main() {
    SquareRoot s;
    s.Input();
    s.calculate();
    s.Result();

    return 0;
}


