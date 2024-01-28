/* IF ELSE
#include<iostream>
using namespace std;

int main()
{
    int n;
    string list[9] = {"one","two","three","four","five","six","seven","eight","nine"};

    cin>>n;
    
    if(1<=n && n<=9)
    {
        cout<<list[n-1];
    }
    else
    {
        cout<<"Greater than 9";
    }
    
}*/

/*FOR LOOP
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    string list[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    cin>>a;
    cin>>b;
    
    for(int n=a;n<=b;n++)
    {
        if (n>9)
        {
            if (n%2 == 0)
            {
                cout<<"even"<<endl;
            }
            else
            {
                cout<<"odd"<<endl;
            }
            
        }
        else
        {
            cout<<list[n-1]<<endl;
        }
        
    }
    
    return 0;
}*/

/*FUNCTION
#include<iostream>
using namespace std;

void greater_num(int a, int b, int c, int d)
{
    int ans,temp1,temp2;

    temp1 = a;
    if(a<b)
    {
        temp1 = b;
    }

    temp2 = c;
    if(c<d)
    {
        temp2 = d;
    }
    
    ans = temp1;
    if(temp1<temp2)
    {
        ans = temp2;
    }
    cout<<ans;
}

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    greater_num(a,b,c,d);

    return 0;
}*/


/*POINTER
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int* ptra = &a;
    int* ptrb = &b;

    int sum = *ptra + *ptrb;
    int diff = abs(*ptra-*ptrb);
    
    cout<<sum<<endl;
    cout<<diff<<endl;
    
    return 0;
}
*/

/*ARRAY
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int A[1000] = {};
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}*/

/*STRING
#include<iostream>
#include<sstream>
using namespace std;

int main() {
    // string s;
    // int l = s.length();
    // cin>>s;
    // cout<<s;
    // char ch=',';
    // for(int i=0;i<l;i++)
    // {
    //     if(s[i] == ch)
    //     {
    //         cout<<endl;
    //     }
    //     cout<<s[i];
    // }

    string s,t;

    getline(cin,s);

    stringstream x(s);

    while(getline(x,t,','))
    {
        cout<<t<<endl;
    }

    return 0;
}
*/

/*STRING
#include<iostream>
using namespace std;

int main()
{
    string a = "";
    string b = "";
    string temp1,temp2;
    cin>>a>>b;

    int la = a.length();
    int lb = b.length();
    cout<<la <<" "<<lb<<endl;
    cout<<a+b<<endl;
    
    temp1 = a;
    temp1[0] = b[0];

    temp2 = b;
    temp2[0] = a[0];
    cout<<temp1<<temp2<<endl;
    return 0;

}*/

/*STRUCTURE
#include<iostream>
using namespace std;

int main()
{
    struct
    {
        int age;
        string name;
        string l_name;
        int std;
    }newstruct;

    cin>>newstruct.age
        >>newstruct.name
        >>newstruct.l_name
        >>newstruct.std;
    cout<<newstruct.age<<" "
        <<newstruct.name<<" "
        <<newstruct.l_name<<" "
        <<newstruct.std<<endl;
    return 0;
}*/

/*CLASS
#include<iostream>
using namespace std;

class school
{
    public :
        void func1(int age, string name, string l_name, int std)
        {
            cout<<age<<endl;
            cout<<l_name<<", "<<name<<endl;
            cout<<std<<endl;
        }
        void func2(int age, string name, string l_name, int std)
        {
            cout<<age<<","<<name<<","<<l_name<<","<<std<<endl;
        }

};

int main()
{
    int age,std;
    string name;
    string l_name;
    cin>>age>>name>>l_name>>std;

    school obj;
    
    obj.func1(age,name,l_name,std);
    obj.func2(age,name,l_name,std);

    

    return 0;
}*/

/*INHERITANCE
#include<iostream>
using namespace std;

class rectangle
{
    public:
        int h,w;

        void input()
        {
            cin>>w;
            cin>>h;
        }

        void display()
        {
            cout<<w<<" "<<h<<endl;
        }
};

class rectangle_area : public rectangle
{
    public:
        int a;
        void display()
        {
            rectangle::input();
            rectangle::display();
            a = w * h;
            cout<<a;
        }
};

int main()
{
    rectangle obj;
    rectangle_area obj1;
    obj1.display();

    return 0;
}*/

/*INHERITANCE
#include<iostream>
using namespace std;

class Triangle{
    public:
        void triangle(){
            cout<<"I am a triangle\n";
        }
};

class Isosceles : public Triangle{
    public:
        void isosceles(){
            cout<<"I am an isosceles triangle\n";
        }
        void isosceles_with_property()
        {
            cout<<"In an isosceles triangle two sides are equal";
        }
};

int main(){
    Isosceles isc;
    isc.isosceles();
    isc.isosceles_with_property();
    isc.triangle();
    return 0;
}*/

/*INHERITANCE
#include<iostream>
using namespace std;

class Equilateral
{
    public:
        void equilateral()
        {
            cout<<"I am an equilateral triangle"<<endl;
        }
};

class Isosceles : public Equilateral
{
    public:
       void isosceles()
        {
            cout<<"I am an isosceles triangle"<<endl;
        } 
};

class Triangle : public Isosceles
{
    public:
       void triangle()
        {
            cout<<"I am an triangle"<<endl;
        } 
};

int main()
{
    Triangle obj;
    obj.equilateral();
    obj.isosceles();
    obj.triangle();
    return 0;
}*/

/*
#include<iostream>
#include <iomanip>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}
template<typename S>
S st(S s1, S s2)
{
    return s1 + s2;
}

int main()
{
    int n;
    cin>>n;
    string type;
    string s1,s2;
    int i1,i2;
    float f1,f2;
    string arr[10];
    int arr1[10];
    float arr2[10];
    int scnt=0,icnt=0,fcnt=0;

    int j = 0;
    int k = 0;
    for(int i=0;i<n;i++)
    {
        cin>>type;
        if(type == "string")
        {
            cin>>s1>>s2;
            arr[i] = st<string>(s1,s2);
            scnt++;
        }
        else if(type == "int")
        {
            cin>>i1>>i2;
            arr1[j] =add<int>(i1,i2);
            j++;
            icnt++;
        }
        else if(type == "float")
        {
            cin>>f1>>f2;
            arr2[k] = add<float>(f1,f2);
            k++;
            fcnt++;
        }
    }
    for(int i=0;i<scnt;i++)
    {
        cout<<arr[i];
    }
    for(int i=0;i<icnt;i++)
    {
        cout<<"\n"<<arr1[i];
    }
    for(int i=0;i<fcnt;i++)
    {
        cout<<fixed<<setprecision(1)<<"\n"<<arr2[i];
    }
    

    return 0;
}*/
/*
#include<iostream>
using namespace std;


int main()
{
    int n;
    int z;
    int arr[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int lnum=0;
    for(int i=0;i<n;i++)
    {
        if(lnum>arr[i])
        {
            lnum = arr[i];
        }
    }
    int hnum=0;
    for(int i=0;i<n;i++)
    {
        if(hnum<arr[i])
        {
            hnum = arr[i];
        }
    }

    z = hnum - lnum;
    cout<<"Result = "<<z;
    return 0;
}*/
/*
#include<iostream>
using namespace std;

class students
{
    public :
        int scores[5];

        void input()
        {
            int s;
            for(int i=0;i<5;i++)
            {
                cin>>scores[i];
            }
        }

        int total_score()
        {
            int temp = 0;
            for(int i=0;i<5;i++)
            {
                temp = temp + scores[i];
            }
            return temp;
        }
};

int main()
{
    students obj;
    int n; cin>>n;
    int total[100];

    for(int i=0;i<n;i++)
    {
        obj.input();
        total[i] = obj.total_score();
    }

    int temp = total[0];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(temp < total[i])
        {
            count++;
        }
    }
    cout<<count;
    

    
    return 0;
}*/

#include<iostream>
#include <iomanip>
using namespace std;

template <class T> class add
{
    
    public :
        add_string(T a, T b)
        {
            T c = a +b;
            return c;
        }

        add_int(T a, T b)
        {
            cout<<a+b<<endl;
        }
        add_float(T a, T b)
        {
            cout<<fixed<<setprecision(1)<<a+b<<endl;
        }
};

int main()
{
    int n; cin>>n;
    string type;
    string s1,s2;
    int i1,i2;
    float f1,f2;

    add<string> a;
    add<int> b;
    add<float> c;

    string arr1[5];
    int arr2[5];
    float arr3[5];

    int s=0,in=0,f=0;   
    int j=0; 

    for (int i = 0; i < n; i++)
    {
        cin>>type;
        if(type == "string")
        {
            s++;
            cin>>s1>>s2;
            arr1[j] = a.add_string(s1,s2);
            j++;
        }
        else if(type == "int")
        {
            in++;
            cin>>i1>>i2;
            arr2[j] = b.add_int(i1,i2);
            j++;
        }
        else if(type == "float")
        {
            f++;
            cin>>f1>>f2;
            arr3[j] = c.add_float(f1,f2);
            j++;
        }
    }

    for (int i = 0; i < s; i++)
    {
        cout<<arr1[i];
    }
    for (int i = 0; i < in; i++)
    {
        cout<<arr2[i];
    }
    for (int i = 0; i < f; i++)
    {
        cout<<arr3[i];
    }
    

    return 0;
}