#include <iostream>
#include <cstdlib>
using namespace std;

int max(int * arr, int n);
int min(int * arr, int n);
void swapMinMax(int * arr, int n, int iMax, int iMin);

int main(){
    int n;
    cout<<"Enter variable N: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()%(200)-100;
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    int iMax = max(arr,n);
    int iMin = min(arr,n);
    swapMinMax(arr, n, iMax, iMin); 
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    system("pause");
}

int max(int * arr, int n){
    int max = arr[0];
    int iMax = 0;
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            max = arr[i];
            iMax = i;
        }
    }
    return iMax;
}

int min(int * arr, int n){
    int min = arr[0];
    int iMin = 0;
    for (int i = 0; i < n; i++)
    {
        if(min>arr[i]){
            min = arr[i];
            iMin = i;
        }
    }
    return iMin;
}

void swapMinMax(int * arr, int n, int iMax, int iMin){
    int b = arr[iMax];
    arr[iMax] = arr[iMin];
    arr[iMin] = b;
}