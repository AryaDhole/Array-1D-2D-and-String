//Arya Dhole
//ENTC-A2
//22070123027
#include <iostream>
using namespace std;
int main()
{
 int i,num,key;
 float array[1000];
 cout<< "Enter number of elements : "<<endl ;
 cin>> num ;

 for(i=0;i<num;i++)
  {
    cout<< "Enter the number : "<<endl ;
    cin>> array[i];
  }
 
 for (i= 0; i < num; ++i) 
  {
    cout << array[i] << "  ";
  }
 cout<< "Enter the number to find : "<<endl ;
 cin>> key;
 int low=0;
 int high=num;
 int mid=(low+high)/2;

 while(low<=high)
 {
    if(array[mid]<key)
    {
        low=mid+1;
    }
    else if(array[mid]==key)
    {
        cout<< key << " was found at position "<< (mid+1) <<endl ;
        break;
    }
    else
    {
        high=mid-1;
        mid=(low+high)/2;
    }
 }

 if(low>high)
 {
    cout<< "Number is missing from array try again" <<endl ;
 }

 return 0;
}
