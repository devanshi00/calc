#include <iostream>
using namespace std;

int main(){

    int x, y;
    int z=1;
    cout<<"MINI CALCULATOR"<<endl;
    cout<<"Enter your Numbers"<<endl;
    cin>>x>>y;



    cout<<"The sum of " << x <<" and " << y << " is " <<x+y<<endl;
    cout<<"The product of " << x <<" and " << y << " is " <<x*y<<endl;
    cout<<"The division of " << x <<" and " << y << " is " <<x/y<<endl;
    cout<<"The subtraction of " << x <<" and " << y << " is " <<x-y<<endl;
    cout<<"modulo of the numbers is "<<x%y<<endl;
      for(int i=1;i<=y;i++){
      
      z=z*x;
      }
      cout<<x << " to the power " << y<< " is " <<z<<endl;
      

    return 0;
}



