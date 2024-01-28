#include<iostream>
using namespace std;


class calculator{
	public : 
    int ans;
    string operation = "";
    int a,b;
    
    void add(int val1, int val2){
    	operation.append("Addition");
    	a = val1;
        b = val2;
       	ans = a + b;
	}
    
    void sub(int val1, int val2){
        operation.append("Subtraction");
    	a = val1;
        b = val2;
       	ans = a - b;
	}
    
    void mul(int val1, int val2){
        operation.append("Multiplication");
    	a = val1;
        b = val2;
       	ans = a * b;
	}
    
    void div(int val1, int val2){
        operation.append("Division");
    	a = val1;
        b = val2;
       	ans = a / b;
	}
    
    void display(){
    cout<<"The result of "<<operation<<" on a = "<<a<<", b = "<<b<<" is : "<<ans<<endl;
    }
};

int main(){
	calculator obj;
    int val1,val2;
    char option;
    cout<<"Enter the first number : ";
    cin>>val1;
    cout<<"Enter the second number : ";
    cin>>val2;
    cout<<"Enter the operation you want to perform (+,-,*,/) : ";
    cin>>option;

    switch (option)
    {
    case '+' :
        obj.add(val1, val2);
        break;
    case '-' :
        obj.sub(val1, val2);
        break;
    case '*' :
        obj.mul(val1, val2);
        break;
    case '/' :
        obj.div(val1, val2);
        break;
    default:
        break;
    }
    obj.display();
	return 0;
}