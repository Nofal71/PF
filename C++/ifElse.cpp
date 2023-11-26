#include <iostream>
using namespace std;
main(){
    int savings ;
    cout<<"Enter Your Savings = ";
    cin>>savings;
    cout<<endl;

    if (savings>5000)
    {
        cout<<"Going to Lahore ";
    }
    else if (savings<5000){
        cout<<"remain in ISlamabad";

    }
    else{
        cout<<"Cancel Program";

    }

int a,b,c ;
cout<<"\nEnter Three Numbers for Maximum = ";
cin>>a>>b>>c;
cout<<endl;

if(a>b){
    if(a>c){
        cout<<" Maxium is "<<a;
    }
   else{
    cout<<" Maxium is "<<c;
   }
}
else{
    if(b>c){
        cout<<" Maxium is "<<b;
    }
    else{
        cout<<" Maxium is "<<c;
    }
}

int EvenOdd;
cout<<"\nEnter Number To check is even or Odd = ";
cin>>EvenOdd;
cout<<endl;

if(EvenOdd % 2 == 0){
    cout<<"Number is Even ";
}
else{
    cout<<"Number is Odd ";
}




}

