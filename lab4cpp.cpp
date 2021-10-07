#include <iostream>
using namespace std;
int main(){
    float a,i,s,n;
    a=1;
    s=0;
    cout<<"Enter variable N: ";
    cin>>n;
    for (i=1; i<=n; i++)
    {
        a=a*i;
        s=s+(1/a);
    }
    cout<<"Variable S = "<<s<<endl;
    system("pause");
}