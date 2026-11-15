// #include <stdio.h>
// void main()
// {
//     int i,j,n,a,swap;
//     int k[n];
//     for(i=0;i<(n-1);i++)
//     {
//         a=i;
//         for(j=i+1;j<n;j++)
//         if( k[j]>k[a])
//         {
//             k[a]=k[j];
//         }
//         swap=k[i];
//         k[i]=k[a];
//         k[a]=swap;
//     }
// }
// C Program for checking numbers//x,yif(!(x-y))
// are equal using bitwise operator
#include <stdio.h>

int main()
{
    int x = 1;
    int y = 2;

    // Using XOR
    // XOR of two equal numbers is 0
    if (!(x - y))
        printf(" %d is equal to %d ", x, y);
    else
        printf(" %d is not equal to %d ", x, y);

    return 0;
}