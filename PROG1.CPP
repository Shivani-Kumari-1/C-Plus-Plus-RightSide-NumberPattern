/*

        1   //8 SPACE //
      1 2   //6 SPACE //
    1 2 3   //4 SPACE //
  1 2 3 4   //2 SPACE //
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n,s;    //i=row, j=column, s=space //
    cout<<"Enter number = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            cout<<" "<<" "; //here first space for normal space and second space for coding space //
        }
        for(j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    for(i=n-1;i>=1;i--)
    {
        for(s=1;s<=n-i;s++)
        {
            cout<<" "<<" "; //here first space for normal space and second space for coding space //
        }
        for(j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }

    return 0;
}
