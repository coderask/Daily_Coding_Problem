/* given an array, return a new array s.t each number is the sum of every number except i */ 
#include <iostream>
using namespace std;

void retSum(int arr[], size_t size){
    //case empty array 
    if(size == 0) return;
    //case single element array
    if(size == 1){
        arr[0] = 0;
        return;
    }
    //case general 
    int sum = 0; 
    //calculate sum of array 
        for(int i = 0; i < size; i++){
            sum += arr[i];
        }
        //go through each index and update with sum - arr[j]
        for(int j = 0; j < size; j++){
            arr[j] = sum - arr[j];
        }
}

void printArray(const int arr[], size_t size){
    for(size_t i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char* argv[]){
    int a1[] = {1, 2, 3, 4};
    int a2[] = {5};
    int a3[] = {0, -1, 2, -3};
    int a4[] = {10, 10, 10};

    cout << "Before a1: ";
    printArray(a1, 4);
    retSum(a1, 4);
    cout << "After  a1: ";
    printArray(a1, 4);

    cout << "\nBefore a2: ";
    printArray(a2, 1);
    retSum(a2, 1);
    cout << "After  a2: ";
    printArray(a2, 1);

    cout << "\nBefore a3: ";
    printArray(a3, 4);
    retSum(a3, 4);
    cout << "After  a3: ";
    printArray(a3, 4);

    cout << "\nBefore a4: ";
    printArray(a4, 3);
    retSum(a4, 3);
    cout << "After  a4: ";
    printArray(a4, 3);

    return 0;
}