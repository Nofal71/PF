#include <iostream>
using namespace std;
class Smaller {
public:
    int Small(int num1, int num2, int num3, int num4) {
        int smallest = num1;
    if(num2<smallest){
        smallest=num2;
    }
    else if (num3 < smallest ){
        smallest=num3;
    }
    else if (num4 < smallest){
        smallest=num4;
    }
    cout<<"Smallest Number is = "<<smallest<<endl;      
}
};
int main() {
    Smaller i;
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    i.Small(a,b,c,d);
return 0;
} 

