#include<iostream>
using namespace std;

int main(){

    cout<<"Starting"<<endl;

    int arr[] = {2,7,11,15};
    int total_sum = 9;
    int target_sum = 9;
    int size = sizeof(arr)/sizeof(int);


    for(int j = 0; j<size; j++){
        if(total_sum == target_sum){
            cout<<"The Pair is found.."<<endl;
            cout<<"The number is "<<arr[j]<<"and "<<arr[j];
            return 0;
        }
    }

    cout<<"The Program finished"<<endl;
    return 0;
}