                 //SEARCHING IN ARRAYS

//1.)LINEAR SEARCH
//phle array insert krege then jo usme element dhundna hae that is key uska index return krege through linear search
//if the element which we want to find is not present in the index then it returns -1 as the output
//Time Complexity= O(n)
#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){    //traversing the array  (i is the index of the element)
        if(arr[i]==key){
            return i;  //if element matched with the key returns its index
        }
    }
    return -1;        //if element doesn't matched with the key
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
    cout<<linearsearch(arr,n,key)<<endl;
    return 0;
}






