#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[6] = {1, 2, 3, 4, 5, 6};

    for(int i = 0; i<6; i++){
        for(int j = 1; j<6; j++){
            if(arr[j] % 2 == 0){
                swap(arr[i] , arr[j]);
                cout<<arr[];

            }
        }
    }
    // vector<int> result;

    // for(int i = 0; i<arr.size() ; i++){
    //     if(arr[i] % 2 == 0){
    //         result.push_back(i);

    //     }

    // }
    return 0;
}