                          //BINARY SEARCH

#include<iostream>
using namespace std;

bool BinarySearch(int arr[],int start,int end,int key){
    //BASE CODE
    
    if(start>end){         //agr key present hi ni hoti to false return kr do
        return false;
    }
     int mid=start+(end-start)/2;    
    
    if(arr[mid]==key){    //when mid element gets matched with key to true return kr do
        return true;
    }
   
    if(arr[mid]<key){
        return BinarySearch(arr,mid+1,end,key);  //right half me search krne ke leye
    }
    else{
        return BinarySearch(arr,start,mid-1,key); //left half me search krne ke leye when arr[mid]>key
    }
}

int main(){
    int arr[5]={10,88,35,1,50};
    int size=5;
    int key;
    cin>>key;
    // cout<<BinarySearch(arr,0,5,key)<<endl;
    bool ans=BinarySearch(arr,0,5,key);
    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}