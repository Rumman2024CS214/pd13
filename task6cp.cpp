#include<iostream>
#include<fstream>
using namespace std;
string textonly(string filename);
main()
{
    string text;
    text=textonly("task6.txt");
    cout<<text;
}

string textonly(string filename)
{
    string output="";
    int code=0;
    string check;
    fstream file;
    file.open(filename,ios::in);
    getline(file,check);
    for(int i=0;check[i]!='\0';i++)
    {
        code=check[i];
        if(code==32 || code==34 || code==39 || code==44 || (code>=65 && code<=90) || (code>=97 && code<=122))
        {
            output+=check[i];
        }
    }
    if(output=="")
    {
        output+="\"What... why did you make this?\"";
    }
    return output;
}