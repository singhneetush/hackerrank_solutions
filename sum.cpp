#include<iostream>
#include<math.h>

using namespace std ;

int add(int a , int b ){

    return(a+b);
}

int main(){
    int x , y , sum =0;

    cout<<"enter a :: "<<endl;
    cin>>x;
    cout<<"enter b :: "<<endl;
    cin>>y;

    sum= add(x,y);

    cout<<"the sum of x and y is :: "<<sum<<endl;

    return 0;
}
