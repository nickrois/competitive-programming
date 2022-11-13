#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int s[3];
    int i;
    scanf("%d %d %d", &s[0], &s[1], &s[2]);
    int a = s[0];
    int b = s[1];
    int c = s[2];
    int len = sizeof(s)/sizeof(s[0]);
    std::sort(s, s + len);
    for(int i=0; i<len; i++)
    {
        cout<<s[i]<<endl;
    }
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}
