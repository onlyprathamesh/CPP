#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
int count=0;
int cline=0;
std::string line;
cout<<"\nThe lines in text file not starting with Alphabet ‘A' are: \n"<<endl;
ifstream reader("/home/mmcoe/Desktop/SVJ/story1.txt");
if(!reader)
{
cout<<"Error opening input file"<<endl;
return -1;
}
while(1)
{
getline(reader,line);
if(reader.eof())
break;
else
{
if(line[0]!='A')
{
cout<<line<<endl;
count=count+1;
}
}
}
cout<<"\nThe number of lines in text file not starting with Alphabet ‘A' are:
"<<count<<"\n";
reader.close();
return 0;
}