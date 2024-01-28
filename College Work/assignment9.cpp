#include<iostream>

using namespace std;

#define size 10

class stack
{
    private:
    int top;
    char stk[size];
    public:
    stack()
    {
        top=-1;
    }
    void push(char);
    char pop();
    int full();
    int empty();
};

void stack::push(char x)
{
    top=top+1;
    stk[top]=x;
}

char stack::pop()
{
    char s;
    s=stk[top];
    top=top-1;
    return s;
}

int stack::full()
{
    if(top==size)
    {
    return 1;  
    }
    else
    {
    return 0;
    }
}

int stack::empty()
{
    if(top==-1)
    {
    return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i=0;
    stack s1;
    char exp[20], ch;
    cout<<"\n\t\t_____Welcome to Parenthesis Checker_____";
    cout<<"\n\nEnter the expression whose parenthesis checking is to be done: ";
    cin>>exp;
    if((exp[0]==')')||(exp[0]==']')||(exp[0]=='}'))
    {
        cout<<"\nInvalid Expression.... :(";
        return 0;
    }
    else
    {
        while(exp[i]!='\0')
        {
            ch=exp[i];
            switch(ch)
            {
                case '(':
                s1.push(ch);
                break;

                case '[':
                s1.push(ch);
                break;

                case '{':
                s1.push(ch);
                break;

                case ')':
                s1.pop();
                break;

                case ']':
                s1.pop();
                break;

                case '}':
                s1.pop();
                break;
            }
            i=i+1;
        }
    }
    if(s1.empty())
    {
        cout<<"\nExpression is well parenthesised... :)\n";
    }
    else
    {
        cout<<"\nSorry... The expression is not well parenthesised. :(\n";
    }
    return 0;
}
