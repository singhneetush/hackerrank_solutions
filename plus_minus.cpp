#include<iostream>
#include<math.h>
#include<stdlib.h>
#include <iomanip>
#include<vector>


using namespace std ;

int main(){
    int i ,n;
    double p= 0;
    double q=0;
    double r=0;
    setprecision(6);
    cin>>n;
    int arr[n];
    //cout<<"the elements of array are :: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];

    }

    for(i=0;i<n;i++){
        if(arr[i]>0){
            p++;
        }
        else if(arr[i]<0){
            q++;
        }
        else
        r++;
    }
    double a1,a2,a3 ;
    a1=double (p)/double (n);
    a2=double (q)/double (n);
    a3=double (r)/double (n);

    cout<<setprecision(6)<<a1<<endl;
    cout<<setprecision(6)<<a2<<endl;
    cout<<setprecision(6)<<a3<<endl;
    
    
    return 0;
}