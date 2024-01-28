#include<iostream>
using namespace std;
class publishing
{
    protected:
    string title;
    float price;
    public:
    void get_string();
    void put_string();

};

void publishing::get_string()
{
    cout<<"Enter the title:";
    cin>>title;
}

void publishing::put_string()
{
    cout<<"title is=";
    cout<<title;
}

class book:public publishing
{
    protected:
    int pages;
    public:
    void get_pages();
    void put_pages();
    void get_price();
    void put_price();
};

void book::get_pages()
{
    try
    {
        cout<<"Enter the pages\n";
        cin>>pages;
        if(pages>0)
        {
            cout<<"Valid page count\n";
        }
        else
        {
            throw(pages);
        }
    }
    catch(int MyRoll)
    {
        cout<<"Access denied\n";
        cout<<"Pagecount is: "<< MyRoll;
    }
}

void book::put_pages()
{
    cout<<"pages is:"<<pages;
}

void book::get_price()
{
    cout<<"\nEnter price:";
    cin>>price;
}

void book::put_price()
{
    cout<<"\nprice is ="<<price;
}

class tape:public publishing
{
    protected:
    int time;
    public:
    void get_time();
    void put_time();
};

void tape::get_time()
{
    cout<<"\nEnter time:";
    cin>>time;
}

void tape::put_time()
{
    cout<<"\ntime is=";
    cout<<time;
}

int main()
{
    book obj1;
    tape obj2;
    int ch;
    while(1)
    {
        cout<<"\n1.book";
        cout<<"\n2.tape";
        cout<<"\n3.exit";
        cout<<"\nEnter your choice";
        cin>>ch;
        if(ch==3)
        {
            break;
        }
        switch(ch)
        {
            case 1:
            obj1.get_string();
            obj1.put_string();
            obj1.get_price();
            obj1.put_price();
            obj1.get_pages();
            obj1.put_pages();

            break;

            case 2:
            obj2.get_string();
            obj2.put_string();
            obj2.get_time();
            obj2.put_time();
            break;
        }

    }
}