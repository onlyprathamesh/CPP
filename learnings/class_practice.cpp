#/*include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
typedef map<string,int> mapType;
mapType populationMap;
populationMap.insert(pair<string, int>("Maharashtra", 7026357));
populationMap.insert(pair<string, int>("Rajasthan", 6578936));
populationMap.insert(pair<string, int>("Karanataka", 6678993));
populationMap.insert(pair<string, int>("Punjab", 5789032));
populationMap.insert(pair<string, int>("West Bengal", 6676291));
mapType::iterator iter;
cout<<"========Population of states in India==========\n";
cout<<"\n Size of populationMap"<<populationMap.size()<<"\n";
string state_name;
cout<<"\n Enter name of the state :";
cin>>state_name;
iter = populationMap.find(state_name);
if( iter!= populationMap.end() )
cout<<state_name<<" 's population is "
<<iter->second ;
else
cout<<"Key is not populationMap"<<"\n";
populationMap.clear();
}
*/
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    typedef map<string ,int> mapType;
    mapType population;
    population.insert(pair<string, int>("Pune", 7852952));
    population.insert(pair<string, int>("Goa", 64786));
    population.insert(pair<string, int>("Mumbai", 8735626));
    mapType :: iterator it;
    cout<<"==population=="<<endl;
    cout<<"Size"<<population.size()<<endl;
    string string_name;
    cout<<"Enter name : ";
    cin>>string_name;
    it = population.find(string_name);
    if(it != population.end())
    {
    cout<<string_name<<"'s population is : "<<it->second;
    }
    else
    {
        cout<<"Not in list"<<endl;
        population.clear();
    }
}