#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c,angle1,angle2,angle3;
    cout<<"Enter the three sides of the triangle: ";
    cin>>a>>b>>c;

    angle1 = round(((acos((a*a+b*b-c*c)/(2*a*b))*180)/3.14)*1)/1;
    angle2 = round(((acos((a*a+c*c-b*b)/(2*a*c))*180)/3.14)*1)/1;
    angle3 = round(((acos((b*b+c*c-a*a)/(2*c*b))*180)/3.14)*1)/1;

    cout<<"First angle - "<<angle1<<" (degrees) / "<< acos((a*a+b*b-c*c)/(2*a*b)) <<" (radians)"<<endl;
    cout<<"Second angle - "<<angle2<<" (degrees) / "<< acos((a*a+c*c-b*b)/(2*a*c)) <<" (radians)"<<endl;
    cout<<"Third angle - "<<angle3<<" (degrees) / "<< acos((b*b+c*c-a*a)/(2*c*b)) <<" (radians)"<<endl;
    
    system("pause");
}