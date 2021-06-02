#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

int main(){
    long int x1 ,v1 ,x2, v2 ,p=0;
    
    cin>>x1>>v1>>x2>>v2;

    while(x1<100000000) // coz x1*v1=10^8 assuming it to be a large integer as per the given constraints 
    {
        x1=x1+v1;
        x2=x2+v2;
        
        if(x1==x2){
            p=1;
            break;
        }
    }   
    if(p==1){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;



    

    return 0;
}