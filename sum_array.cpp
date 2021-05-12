#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int sum_array(int array[] , int sizeofarray){  
    int i ,sum=0;
    for(i=0;i<sizeofarray ;i++){
        sum+=array[i];
        
    }
    cout<<"the sum of array elements is :: "<<sum;
}
int main(){
    int arr[5] , i , total , size ;
    cout<<"Enter the size of array :: "<<endl;
    cin>>size;
    //cout<<"The size of array is :: "<<size<<endl;

    cout<<"Enter the elements of the array :: "<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }

    total =sum_array(arr , size);

   

    return 0 ;

}