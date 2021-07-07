#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int to string

    int num1=1;
    //converting to string (method 1) to_string()
    string st1=to_string(num1);
    //converting to string (method 2) sstream
    std::stringstream s;
    s<<num1;
    string st2=s.str();
    //printing
    cout<<st1<<" "<<st2<<endl;
    
    //string to int 

    //converting to int (method 1) stoi()
    int n1=stoi(st1);
    
    string test ="567";
    //int n2=atoi(test); string doesnt work for atoi only character array
    char ch[]="456";
    int n2=atoi(ch);
    
    char ch2[]={'1','2','3','\0'};
    int n3=atoi(ch2);

    cout<<n1<<" "<<n2<<" "<<n3;
}