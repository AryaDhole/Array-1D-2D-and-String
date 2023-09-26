//Arya Dhole
//ENTC-A2
//22070123027

#include<iostream>
using namespace std;

int main()
{
    int i=0,count=0;
    char str[100];

    cout<< "Enter Name : "<<endl ;
    cin.get(str,100);

    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            count++;
        }
        i++;
    }

    cout<< count;
return 0;
}
