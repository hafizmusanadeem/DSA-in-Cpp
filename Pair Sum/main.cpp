#include<iostream>
using namespace std;

int main(){
    cout<<"\n    The Program is Starting    \n"<<endl;

    //Declaring/Initializing usables.
    int a[] = {2,7,11,15};
    int size = sizeof(a)/sizeof(int);
    int target_sum = 9;
    
    //Visualizing the size of array and target sum.
    cout<<"The size of your array is: "<<size<<endl;
    cout<<"Your target sum is: "<<target_sum<<endl;
    
    //Main Logic for returning Pair sum.
    for(int i =0; i<size; i++){
        int total_sum = 0;
        int primary_num = i;
        for(int j = i+1;i<size; i++){
            int secondary_num = j;
            total_sum = a[i] + a[j];
            if(total_sum == target_sum){
                cout<<"\nThe Pair is found."<<endl;
                cout<<"The Pair is: "<<a[primary_num]<<" and "<<a[secondary_num]<<endl;
                return 0;
            }
        }
    }
    return 0;
}