//Arya Dhole
//ENTC-A2
//22070123027
#include <iostream>
using namespace std;
int main()
{
 int arr[5],i,a;
 for(i=0;i<5;i++)
  {
    cout<< "Enter the number : "<<endl ;
    cin>> arr[i];
  }

 for(i=0;i<5;++i)
  {
     if(arr[i]>arr[i+1])
         {
             a=arr[i];
             arr[i]=arr[i+1];
             arr[i+1]=a;
         }
  }
 cout<< "Smallest number is "<< arr[0] <<endl ;
 cout<< "Largest number is " << arr[5] <<endl ;
 return 0;
}
