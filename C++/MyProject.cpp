#include <iostream>
using namespace std;
class Calculator{
    public:
int num1,num2;
void input(){
    
    cin>>num1>>num2;
}
void operation(){
    int op;
switch(op){
    case '+':
    cout<<num1+num2;
    break;
    case '-':
    cout<<num1-num2;
    break;
    case '*':
    cout<<num1*num2;
    break;
    case '/':
    cout<<num1/num2;
    break;
}
}


};
