#include<iostream>
using namespace std;

int main(){
   int arr[5];
   int size=5;
   int min=0;
   

   for(int i=0;i<size;i++){
      cin>>arr[i];
      if(min>arr[i]){
         min=arr[i];
      }
   }cout<<"maximum of the array is "<<min;
   
    return 0;
   
   
}































































