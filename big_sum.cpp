#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std ;

int main(){
    int n , i;
    cin>>n;
    long long int a[n] , sum=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum;
}