#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int commaindex(string filename);
string hbname(string filename,int index);
string hbage(string filename,int index);
void cake(string name,string age);
main()
{
    string name,age;
    int index;
    index=commaindex("task3.txt");
    name=hbname("task3.txt",index);
    age=hbage("task3.txt",index);
    cake(name,age);


    
}

void cake(string name,string age)
{
    int age1=stoi(age);
    if(age1%2==0)
    {
        cout<<"\"###############\""<<endl;
        cout<<"\"#"<<age<<" HB "<<name<<"! "<<age<<"#\""<<endl;
        cout<<"\"###############\""<<endl;
    }
    else if(age1%2==1)
    {
        cout<<"\"***************\""<<endl;
        cout<<"\"*"<<age<<" HB "<<name<<"! "<<age<<"*\""<<endl;
        cout<<"\"***************\""<<endl;
    }
}

int commaindex(string filename)
{
    int count=0;
    string text;
    fstream file;
    file.open(filename,ios::in);
    file>>text;
    for(int i=0;text[i]!=',';i++)
    {
        count++;
    }
    return count;
}

string hbname(string filename,int index)
{
    string output;
    string check;
    fstream file;
    file.open(filename,ios::in);
    file>>check;
    for(int i=0;i<index;i++)
    {
        output+=check[i];
    }
    file.close();
    return output;
}

string hbage(string filename,int index)
{
    string output;
    string check;
    fstream file;
    file.open(filename,ios::in);
    file>>check;
    for(int i=index+1;check[i]!='\0';i++)
    {
        output+=check[i];
    }
    return output;
}