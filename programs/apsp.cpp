#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t,c,i,k,l,x,z,j,a[100][100],b[100][100],flag;
    cout<<"Enter total number of nodes:";
    cin>>n;
    c=0;
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                a[i][j]=0;
                continue;
            }
            cout<<i+1<<" to "<<j+1<<" cost is:";
            cin>>x;
            if(x==0)
                a[i][j]=10000;
            else
                a[i][j]=x;
        }
    }
    for(k=-1;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(k==-1)
                {
                    b[i][j]=a[i][j];
                }
                else if(b[i][j]>b[i][k]+b[k][j])
                {
                    b[i][j]=b[i][k]+b[k][j];
                }

            }
        }
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            cout<<b[k][i]<<" ";
        }
        cout<<endl;
    }
}
