#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    
    int m;
    cin>>m;
    int b[m][m];
    int i,j;
   // printf("Enter elements into 2-D array: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    int sum_left=0;
    int sum_right=0;
    int symm=0;
    for(i=0;i<m;i++){
        sum_left+=b[i][i];
    }
    for(i=0;i<m;i++){
        sum_right+=b[i][m-1-i];
    }
    symm=abs(sum_right-sum_left);
    cout<<symm;
    return 0;
}