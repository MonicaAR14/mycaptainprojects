#include <iostream>
using namespace std;
int isprime(int num)
{
    int n, i,flag=1;
    for(i=2; i<=n;i++)
    {
        if(n%i==0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}


int main()
{
    int i,flag=1,n;
    cout<<"enter a number";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if (isprime(i) == 1)
        {
            if(isprime(n-i)==1)
            {
                std::cout <<n<< "="<<i<<"+"<<n-i << std::endl;
                flag =0;
            }
        }
    }
    
 if (flag == 1)
 {
     cout<<"cant be displayed";
 }
return 0;
}
