#include <iostream>
#include <climits>
using namespace std;
int main()
{
int m,n;
cout<<"Enter the value of m and n : ";
cin>>m>>n;
int mat[m][n];
cout<<"Enter the array ";
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>mat[i][j];
}
}
int val=INT_MIN;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(mat[i][j]>val)
{
val=mat[i][j];
}
}
}
cout<<"The mximum value of the array is "<<val;
return 0;
}