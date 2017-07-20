#include<bits/stdc++.h>
using namespace std;
int ct=0;
int findcol(int a[],int num,int k)
{
    int i;
    for(i=0;i<k;i++)
    {
        if(num==a[i])
            return 1;
    }
    return 0;
}
int finddia(int a[],int num,int k)
{
    int i,j;
    for(i=k-1,j=1;i>=0;i--,j++)
    {
        if(num==a[i]+j||num==a[i]-j)
        {
            return 1;
        }

    }
    return 0;
}
int rec(int p[],int n,int r)
{
    int z,k,m;
    if(r==n)
    {
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        if(findcol(p,i,r)||finddia(p,i,r))
            continue;
        p[r]=i;
        z=rec(p,n,r+1);
        p[r+1]=0;
        if(z)
        {
            int a[100][100];
            for(k=0;k<n;k++)
            {
                for(m=0;m<n;m++)
                    a[k][m]=0;
            }
            for(k=0;k<n;k++)
            {
                a[k][p[k]]=1;
            }
            for(k=0;k<n;k++)
            {
                for(m=0;m<n;m++)
                    cout<<a[k][m];
                cout<<endl;
            }
            ct+=1;
            cout<<endl;
        }
    }
    return 0;
}
int main()
{
    int n;
    int t,c,i,k,l,m,z,j,a[100][100],p[100],flag;
    cout<<"Enter the value of N:";
    cin>>n;
    c=0;
    int count=0;
    for(k=0;k<n;k++)
    {
        p[k]=0;
    }
    z=rec(p,n,0);
    cout<<ct<<" Results are Possible";
}
