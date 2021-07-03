#include<iostream>
using namespace std;

#define max 20
int main()
    {
      char name[max]={0};
      int age;
      cout<<"Enter your name:  \n";
      cin.getline(name,max);
      cout<<"Enter your age:  \n";
      cin>>age;
	//checks whether the user is eligible or not

      if (age>=18)
      {
          cout<<name<<",you are eligible to vote!";
      }
      else
      {
        cout<<name<<"you are not eligible to vote!";
      }
return 0;
    }
