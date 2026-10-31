#include <stdio.h>
void main()
{
    int i,j,n,a,swap;
    int k[n];
    for(i=0;i<(n-1);i++)
    {
        a=i;
        for(j=i+1;j<n;j++)
        if( k[j]>k[a])
        {
            k[a]=k[j];
        }
        swap=k[i];
        k[i]=k[a];
        k[a]=swap;
    }
}