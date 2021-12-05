#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void createArray(float *arr[], int n);
void printArray(float *arr[], int n);
float sumElements(float *arr[], int n);
void printNewArray(float *arr[], int n, int s);

int main(){
    srand(time(NULL));
    int n;
    cout<<"Enter variable N: ";
    cin>>n;
    float ** arr1, **arr2, **arr3;
    arr1 = new float *[n];
    arr2 = new float *[n];
    arr3 = new float *[n];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = new float [n];
        arr2[i] = new float [n];
        arr3[i] = new float [n];
    }

    createArray(arr1, n);
    createArray(arr2, n);
    createArray(arr3, n);
    
    cout<<"Array 1:"<<endl;
    printArray(arr1, n);
    cout<<"Array 2:"<<endl;
    printArray(arr2, n);
    cout<<"Array 3:"<<endl;
    printArray(arr3, n);

    int sum1 = sumElements(arr1, n);
    int sum2 = sumElements(arr2, n);
    int sum3 = sumElements(arr3, n);
    
    if (sum1>=sum2 && sum1>=sum3)
    {
        cout<<"Array 1 has the largest sum of elements, which are above the main diagonal, and it = "<<sum1<<endl;
        cout<<"New Array 1: "<<endl;
        printNewArray(arr1, n, sum1);
    } else if(sum2>sum1 && sum2>=sum3){
        cout<<"Array 2 has the largest sum of elements, which are above the main diagonal, and it = "<<sum2<<endl;
        cout<<"New Array 2: "<<endl;
        printNewArray(arr2, n, sum2);
    } else if(sum3>sum1 && sum3>sum2){
        cout<<"Array 3 has the largest sum of elements, which are above the main diagonal, and it = "<<sum3<<endl;
        cout<<"New Array 3: "<<endl;
        printNewArray(arr3, n, sum3);
    }
    
}

void createArray(float *arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand()%(200)-100;
        }   
    }
}

void printArray(float *arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<setw(5)<<arr[i][j];
        }
        cout<<endl;
    }
}

float sumElements(float *arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {   
            sum += arr[i][j];
        }
    }
    return sum;
}

void printNewArray(float *arr[], int n, int s){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < 0)
            {
                cout<<setw(5)<<s;
            } else{
                cout<<setw(5)<<arr[i][j];
            }        
        }
        cout<<endl;
    }
}