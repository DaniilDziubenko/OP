#include <iostream>
using namespace std;

int main(){
    int s1,s2,i,j,n;
    s1=0;
    s2=0;
    for (i=200; i<=250; i++)
    {
        for (j=250;j<=300; j++)
        {
            for (n=1; n<=150; n++)
            {
                if (j%n==0)
                {
                    s1=s1+n;
                }
                if (i%n==0)
                {
                    s2=s2+n;
                }
                
            }

            if ((i==s1) and (j==s2)) 
            {
                cout<<i<<" and "<<j<<" - friendly numbers"<<endl;
            }

            s1=0;
            s2=0;

        }
        
    }

    system("pause");
    
}
