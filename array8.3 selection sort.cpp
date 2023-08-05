                  //SORTING IN ARRAY 
//odering of the elements in the assending order in the array 
//1.)SELECTION SORT 
//find the minimum element in the unsorted array and swap it with element at begining
//we will make two loops first for i jo fisrt element of the array se leker second last ke leye chlega
//then second loop for j jo second element of the array se chlega last element tkk that is n
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];  //because we can't directly give the value as arr[j]=arr[i] because then the value of j will be dismised 
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
    return 0;
}