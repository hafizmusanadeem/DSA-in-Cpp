#include<iostream>
using namespace std;

int main(){
    cout<<"     .....Starting the Program....."<<endl;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    cout<<"The size of the array is: "<<size<<endl;
    for(int st=0; st<size; st++){

        for(int end=st; end<size; end++){
            
            for(int num=st; num<size; num++){
                
                cout<<arr[num];

            }
            cout<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}