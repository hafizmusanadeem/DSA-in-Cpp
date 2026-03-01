#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,1,2,1,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int candidate = arr[0];
    int count = 1;

    //Find potential candidate
    for(int i = 1; i < size; i++) {
        if(arr[i] == candidate)
            count++;
        else
            count--;

        if(count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    //Verify if candidate is actually majority
    int freq = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == candidate)
            freq++;
    }

    if(freq > size / 2)
        cout << "Majority Element: " << candidate << endl;
    else
        cout << "No Majority Element" << endl;

    return 0;
}