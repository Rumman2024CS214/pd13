#include<iostream>
#include<fstream>
using namespace std;
void alphabets(string filename);
main()
{
    alphabets("task4.txt");

}

void alphabets(string filename)
{
    int count=0;
    string output;
    string check1="abcdefghijklmnopqrstuvwxyz";
    string check;
    fstream file;
    file.open(filename,ios::in);
    file>>check;
    for(int i=0;check[i]!='\0';i++)
    {
        for(int j=0;check1[j]!='\0';j++)
        {
            if(check[i]==check1[j])
            {
                check1[j]=' ';
            }
        }
    }
    file.close();
    for(int k=0;check1[k]!='\0';k++)
    {
        if(check1[k]!=' ')
        {
            output+=check1[k];
        }
    }
    file.open(filename,ios::app);
    file<<"\n"<<output;
    file.close();
}