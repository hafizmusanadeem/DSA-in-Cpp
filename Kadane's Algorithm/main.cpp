#include<iostream>
using namespace std;

int main(){
    cout<<"     .....Starting the Program....."<<endl;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int max_sum = INT_MIN;
    cout<<"\nThe size of the array is: "<<size<<endl;

    for(int st=0; st<size; st++){
        int curr_sum = 0;

        for(int end=st; end<size; end++){
            curr_sum += arr[end];
            max_sum = max(curr_sum,max_sum);
            if(curr_sum<0){
                curr_sum = 0;
            }
        }
        // cout<<endl;

    }
    cout<<"The max subarray sum: "<<max_sum<<endl;
    
    return 0;
}