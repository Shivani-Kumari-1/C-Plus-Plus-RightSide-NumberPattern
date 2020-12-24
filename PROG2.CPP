/*

        1   //8 SPACE //
      2 2   //6 SPACE //
    3 3 3   //4 SPACE //
  4 4 4 4   //2 SPACE //
5 5 5 5 5
  4 4 4 4
    3 3 3
      2 2
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
            cout<<" "<<i;
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
            cout<<" "<<i;
        }
        cout<<"\n";
    }
    return 0;
}
