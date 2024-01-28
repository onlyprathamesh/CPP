# include<iostream>
using namespace std;

int main()
{
    int a, b, addition, substraction, multiplication, division, remainder ;
        cout<<"Enter first number : " ;
            cin>>a ;
        cout<<"Enter second number : " ;
            cin>>b ;
                addition = a + b ;
                substraction = a - b ;
                multiplication = a * b ;
                division = a / b ;
                remainder = a % b ;
        cout<<"Addition of two numbers is : " << addition ;
        cout<<"\nSubstraction of two numbers is : " << substraction ;
        cout<<"\nMultiplication of two numbers is : " << multiplication ;
        cout<<"\nDivision of two numbers is : " << division ;
        cout<<"\nRemainder of two numbers is : " << remainder ;
    return 0;
}