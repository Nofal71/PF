#include <iostream>
using namespace std ;
class Temprature{
    int temp;
    public:
   int x;
   void TempInCal(){
    cout<<"Enter Temprature in Calcius = ";
    cin>>x;
   }
   void TempInFar(){
    temp = (9/5)* x +32;
    cout<<"Farenhite = "<<temp<<endl;
   }
};

class PayOfEmploy{
public:
int Annpay,Annhours,salary,PerHourRate,Months,Days,hours,weeks;
void Input(){
    cout<<"Enter Employ Monthly Salary = ";
    cin>>salary;
    cout<<"Number of Months Worked = ";
    cin>>Months;
    cout<<"Enter Working Hours per day =  ";
    cin>>hours;
    cout<<"Enter Working Days per Week =  ";
    cin>>Days;
}    
void Rate(){
    Annpay = salary * Months;
    weeks = Months * 4;
    Annhours =  hours*Days*weeks; 
    PerHourRate = Annpay/Annhours;
    cout<<"Annual Income = "<<Annpay<<"Rs"<<endl;
    cout<<"Per hour rate = "<<PerHourRate<<"Rs"<<endl;
    
}
};









int main(){
    // Temprature T;
    // T.TempInCal();
    // T.TempInFar();

    PayOfEmploy P;
    P.Input();
    P.Rate();   





return 0;
}