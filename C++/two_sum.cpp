#include <iostream>

void getResult(int arr[], int size, int target); 

int main(){

int nums[4] = {2, 7, 11, 15};
int target = 26;
int size = sizeof(nums)/sizeof(nums[0]);

getResult(nums, size, target);
    return 0;
}

void getResult(int arr[], int size,  int target){
    int res[2];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i] + arr[j] == target){
                std::cout<<i<<'\n';
                std::cout<<j<<'\n';
                abort();
            } 
        }
    }
}