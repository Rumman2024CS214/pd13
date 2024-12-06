#include<iostream>
#include<fstream>
using namespace std;
string morse(string filename);
main()
{
    string output=morse("task5.txt");
    cout<<output;

}

string morse(string filename)
{
    string output="\" ";
    string text;
    fstream file;
    file.open(filename,ios::in);
    getline(file,text);
    for(int i=0;text[i]!='\0';i++)
    {
        if(text[i]==' ')
        {
            output+="-.-.-.-";
        }
        else if(text[i]=='A' || text[i]=='a')
        {
            output+=".-";
        }
        else if(text[i]=='B' || text[i]=='b')
        {
            output+="-...";
        }
        else if(text[i]=='C' || text[i]=='c')
        {
            output+="-.-.";
        }
        else if(text[i]=='D' || text[i]=='d')
        {
            output+="-..";
        }
        else if(text[i]=='E' || text[i]=='e')
        {
            output+=".";
        }
        else if(text[i]=='F' || text[i]=='f')
        {
            output+="..-.";
        }
        else if(text[i]=='G' || text[i]=='g')
        {
            output+="--.";
        }
        else if(text[i]=='H' || text[i]=='h')
        {
            output+="....";
        }
        else if(text[i]=='I' || text[i]=='i')
        {
            output+="..";
        }
        else if(text[i]=='J' || text[i]=='j')
        {
            output+=".---";
        }
        else if(text[i]=='K' || text[i]=='k')
        {
            output+="-.-";
        }
        else if(text[i]=='L' || text[i]=='l')
        {
            output+=".-..";
        }
        else if(text[i]=='M' || text[i]=='m')
        {
            output+="--";
        }
        else if(text[i]=='N' || text[i]=='n')
        {
            output+="-.";
        }
        else if(text[i]=='O' || text[i]=='o')
        {
            output+="---";
        }
        else if(text[i]=='P' || text[i]=='p')
        {
            output+=".--.";
        }
        else if(text[i]=='Q' || text[i]=='q')
        {
            output+="--.-";
        }
        else if(text[i]=='R' || text[i]=='r')
        {
            output+=".-.";
        }
        else if(text[i]=='S' || text[i]=='s')
        {
            output+="...";
        }
        else if(text[i]=='T' || text[i]=='t')
        {
            output+="-";
        }
        else if(text[i]=='U' || text[i]=='u')
        {
            output+="..-";
        }
        else if(text[i]=='V' || text[i]=='v')
        {
            output+="...-";
        }
        else if(text[i]=='W' || text[i]=='w')
        {
            output+=".--";
        }
        else if(text[i]=='X' || text[i]=='x')
        {
            output+="-..-";
        }
        else if(text[i]=='Y' || text[i]=='y')
        {
            output+="-.--";
        }
        else if(text[i]=='Z' || text[i]=='z')
        {
            output+="--..";
        }
        output+=" ";
    }
    output+=" \"";
    file.close();
    return output;
}