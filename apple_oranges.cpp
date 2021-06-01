#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

int main(){
    int s,t,a,b,m,n,x,i;
    int org=0 ,app=0;
    //cout<<"enter value of s and t :: "<<endl;
    cin>>s>>t;

    //cout<<"enter value of a and b :: "<<endl;
    cin>>a>>b;

    //cout<<"enter value of m and n :: "<<endl;
    cin>>m>>n;
    
    for(i=0;i<m;i++){
        cin>>x;
        if((a+x>=s) && (a+x<=t)){
            app++;
        }
    }
    for(i=0;i<n;i++){
        cin>>x;
        if((b+x>=s) && (b+x<=t)){
            org++;
        }
    }

    cout<<app<<endl;
    cout<<org<<endl;
    return 0;
}