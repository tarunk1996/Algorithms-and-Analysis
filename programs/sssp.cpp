#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t,i,k,l,x,z,j,a[100][100],b[100],c[100],min;
    cout<<"Enter total number of nodes:";
    cin>>n;
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
    cout<<"Enter origin node number:";
    cin>>z;
    z--;
    k=-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(k!=-1)
            b[j]=a[z][j];
            else
            {
                if(b[j]>b[k]+a[k][j])
                    b[j]=b[k]+a[k][j];
            }
        }
        min=10000;
        for(j=0;j<n;j++)
        {
            if(min>b[j]&&!c[j])
            {
                min=b[j];
                x=j;
            }
        }
        c[x]=1;
        k=x;
    }
    for(i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
}
