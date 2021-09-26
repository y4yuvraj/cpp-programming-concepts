#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char *str = "My name is Ayush";
    cout<<str[4]<<endl;   //m
    cout<<str<<endl;     //My name is Ayush
    //str[4]='m';         runtime error segmrntation fault
    cout<<str;
    cout<<"hello";
}