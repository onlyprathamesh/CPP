#include<iostream>

#include<string>

using namespace std;

class publication 
{
    protected :
        string title;
        float price;

    public :
        publication()
        {
            title = "NA";
            price = 0.0;
        }

        void accept()
        {
            cout<<"\nEnter Title : ";
            cin>>title;
            cout<<"\nEnter Price : ";
            cin>>price;
        }

        void display()
        {
            cout<<"---DATA ENTERED---"<<endl;
            cout<<"Title is : "<<title<<endl;
            cout<<"The price is : "<<price<<endl;
        }
};

class book : public publication
{
    int pagecount;

    public :
        void accept()
        {
            cout<<"Enter pagecount of the book : ";
            cin>>pagecount;

            try 
            {
                if(pagecount < 500)
                {
                    cout<<"pagecount : "<<pagecount<<endl;
                }
                else
                {
                    throw(pagecount);
                }
            }
            catch(int x)
            {
                cout<<"Number of pages exceed!"<<endl;
                cout<<"Enter pagecount again : ";
                cin>>pagecount;
            }
        }

        void display()
        {
            cout<<"Pagecount of the book is : "<<pagecount<<endl;
        }
};

class tape : public publication
{
    float time;

    public :
        void accept()
        {
            cout<<"Enter the duration : ";
            cin>>time;
        }
        
        void display()
        {
            cout<<"Duration of the tape is : "<<time<<endl;
        }
};

int main()
{
    publication a;
    book b;
    tape t;

    int userchoice, exit1=1;
    
    do 
    {
        cout<<"-----MENU-----"<<endl;
        cout<<"1.Add book"<<endl;
        cout<<"2.Add tape"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Select accordingly (1/2/3) : ";
        cin>>userchoice;

        switch(userchoice)
        {
            case 1 :
                a.accept();
                b.accept();
                a.display();
                b.display();
                break;
            
            case 2 :
                a.accept();
                t.accept();
                a.display();
                t.display();
                break;
            
            case 3 :
                cout<<"Exited!"<<endl;
                exit1 = 0;
                break;
        }
    }
    while(exit1);
    {
        cout<<"\n";
        return 0;
    }
}