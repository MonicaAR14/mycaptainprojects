#include <iostream>  
using namespace std;  
int main()  
{  
    int a[5]; 
    int *p[5]; 
    cout << "Enter five numbers :" << endl;  
    for(int i=0;i<5;i++)  
    {  
        cin >> a[i];  
         p[i]=&a[i];
    }  

    cout << "The values are" << endl;  
    for(int i=0;i<5;i++)  
    {  
        cout << *p[i] << endl;  
    }  
    }  