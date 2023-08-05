                       //ARRAYS

                     //Intialization And Declaration Of Array
#include<iostream>
#include<climits>
using namespace std;
int main(){
//1.)
    int arr[4]={10,20,30,40};
    cout<<arr[2]<<endl;
//2.)
    int n;
    cin>>n;
    int arrr[n];
    for(int i=0;i<n;i++){
        cin>>arrr[i];
    }
     for(int i=0;i<n;i++){
        cout<<arrr[i]<<" ";
    }
                         //PRINTING THE MAX. AND MIN. ELEMENT IN AN ARRAY
    int r;
    cin>>r;
    int array[r];
    for(int i=0;i<r;i++){
        cin>>array[i];
    }
    int maxno=INT_MIN;   //jo minnimum integer possible hota hae c++ me usse int min khete
    int minno=INT_MAX;  //jo maximum integer possible hota c++ me usse int max khete
    for(int i=0;i<r;i++){
       maxno=max(maxno,array[i]); //max is a inbuilt function
       minno=min(minno,array[i]); //min is a inbuilt function
    }
    cout<<maxno<<" "<<minno;

    return 0;
}



