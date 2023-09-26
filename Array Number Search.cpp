//Arya Dhole
//ENTC-A2
//22070123027
#include <iostream>
using namespace std;
int main()
{
 int arr[5],i,num,num1=0;
 for(i=0;i<5;i++)
  {
    cout<< "Enter the number : "<<endl ;
    cin>> arr[i];
  }

 cout<< "Enter the number to find : "<<endl ;
 cin>> num;

 for(i=0;i<5;i++)
  {
    if(num==arr[i])
    {
      cout<< num << " was found at position "<< (i+1) <<endl ;
      num1++;
    }
  }

 if (num1==0)
 {
    cout<< "Number is missing from array try again" <<endl ;
 }
 return 0;
}
