//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;

int main()
{   int m,n,p,q;
	cout<< "Enter the no of rows : "<<endl ;
    cin>> m;
    cout<< "Enter the no of columns : "<<endl ;
    cin>> n;
    cout<< "Enter the no of rows : "<<endl ;
    cin>> p;
    cout<< "Enter the no of columns : "<<endl ;
    cin>> q;
    int mat[m][n],mat1[p][q],i,j;
    if((m=p)&&(n=q))
    {
        cout<< "Enter elements of matrix 1 : "<<endl ;
        for (int i = 0; i < m; i++)
          {
              for (int j = 0; j < n; j++)
              {
                cin>> mat[i][j];
              }
	      }
        cout<< "Enter elements of matrix 2 : "<<endl ;
        for (int i = 0; i < p; i++)
          {
              for (int j = 0; j < q; j++) 
              {
                cin>> mat1[i][j];
              }
	      }
        
        cout<< " Addition of matrix is : "<<endl ;
	    for (int i = 0; i < p; i++)
          {
              for (int j = 0; j < q; j++)
	             cout << (mat[i][j] + mat1[i][j]) <<" ";
              cout << "\n";
          }
    }
return 0;
}

