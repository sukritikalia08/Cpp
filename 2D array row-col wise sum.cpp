                          //ROW/COLOUMN WISE SUM
#include<iostream>
using namespace std;
//creating function for sum 
// //row wise sum
// void printSum(int arr[][3],int row,int col){
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum=sum+arr[i][j];
//         }
//         cout<<sum<<" ";
//     }
    
// }
//col wise sum
void printSum(int arr[][3],int row,int col){
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
    
}
int main(){
    //taking input
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    //printing array 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The sum is"<<" ";
    printSum(arr,3,3);
    return 0;
}
