                 //SEARCHING IN ARRAYS
//2.)BINARY SEARCH
//to reduce the complexity from O(n) we use binary search 
//elements should be sorted in the array 
//we take the element from the array as mid element to start the binary search then compare that element with the key element 
//in the further steps a new mid element is created and the same process continues until we find the key element
//Time Complexity= O(log2(n)) and it is less than O(n)
#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int s=0;   //starting point
    int e=n;   //ending point
    while(s<=e){  //beacuse agr s hmara e se aage aa jata hae tb hme pta chl jayega ki key array me present nii hae
    int mid=(s+e)/2;  //formula of finding the mid point 
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    }  
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int key;
cin>>key;
cout<<binarysearch(arr,n,key)<<endl;
return 0;
}