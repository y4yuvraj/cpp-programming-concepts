#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s="geeksforgeeks";
    char p[s.length()];
 
    int i;
    for (i = 0; i < sizeof(p); i++) {
        p[i] = s[i];
        cout << p[i];
    }
    cout<<endl;
    // p[3]='\0';
    cout<<p;
    return 0;
}