                     //BUBBLE SORT
//reapetedly swap two adjacent elements if they are in wrong order
//if we have n number of elements in the array then there will be n-1 iterations 
//first iterartion: n-1    second iterartion: n-2  and so on.. ith iteration:n-i
//Time Complexity=O(n^2)
//bubble sort is adaptive in nature that is when the array is already sorted
//Min. time complexity:O(n) {when the array is already sirted}
//Max. time complexity:O(n^2)
//bubble sort is stable that is order is preserved in case of duplicates
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter=1;  //counter is represented as iterartion number
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

