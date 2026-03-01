#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = {1,2,1,2,1,1};
    int size = sizeof(arr)/sizeof(int);
    vector <int> processed;

    for(int i=0; i<size; i++){
        bool alreadyProcessed = false;

        for(auto num:processed){
            if(num == arr[i]){
                alreadyProcessed = true;
                break;
            }
        }
        if(!alreadyProcessed){
            processed.push_back(arr[i]);
            
            int count = 0;
            for(int j=0; j<size; j++){
                if(arr[i] == arr[j]){
                    count +=1;
                }
            }
            cout << "Element " << arr[i] << " appears "<< count << " times" << endl;
        }
    }
    return 0;
}