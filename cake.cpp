#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n ;
    cin>>n;
    int candles[n];
    for(i=0;i<n;i++){
        cin>>candles[i];
    }
    //finding the max of candles[]
    int m;
    m=candles[0];
    for(i=0;i<n;i++){
        if(m<candles[i]){
            m=candles[i];
            
        }
    }
    
    int count=0;
    for(i=0;i<n;i++){
        if(candles[i]==m)
        count++;
    }
    
    cout<<count<<endl;
    return 0;
}