#include<bits/stdc++.h>

using namespace std;

int main(){
  int i;
  long long int arr[5];
  long long sum=0;
  for(i=0;i<5;i++){
    cin>>arr[i];
    sum+=arr[i];
  }
  long long int sum_max=0;
  long long int sum_min=0;
  long long int max_num ,min_num;
  max_num=arr[0];
  for(i=0;i<5;i++){
    if(max_num<arr[i]){
      max_num=arr[i];
    }
  }
  min_num=arr[0];
  for(i=0;i<5;i++){
    if(min_num>arr[i]){
      min_num=arr[i];
    }
  }
  sum_min=sum-max_num;
  sum_max=sum-min_num;
  cout<<sum_min<<" "<<sum_max<<endl;
  return 0;
}