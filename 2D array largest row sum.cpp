                        //LARGEST ROW SUM
                        
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//creating function to find the index of the row which has max sum 
int largestRowSum(int arr[][3],int row,int col){
    int maxi= INT_MIN;
    int rowindex=-1;
    
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=i;
        }
    }
    cout<<"the maximum sum is"<<" "<<maxi<<endl;
    return rowindex;
}
int main(){
    int arr[3][3];
    cout<<"Enter elements"<<endl;
    //creating 2D array 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    //printing array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    int ansIndex=largestRowSum(arr,3,3);
    cout<<"max row is at index"<<" "<<ansIndex<<endl;
    
}


