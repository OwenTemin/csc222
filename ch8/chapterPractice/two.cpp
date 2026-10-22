#include <iostream>
#include <random>
using namespace std;

void shuffle(int arr[], int size) {
    std::random_device rd;
    std::mt19937 gen(rd());

    for (int i = size - 1; i > 0; --i) {
        std::uniform_int_distribution<int> dist(0, i);
        int j = dist(gen);

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int* shuffle_pure(const int arr[], int size) {
    int* shuffled_arr = new int[size];
    
    for (int i = 0; i < size; ++i) {
        shuffled_arr[i] = arr[i];
    }

    std::random_device rd;
    std::mt19937 gen(rd());

    for (int i = size - 1; i > 0; --i) {
        std::uniform_int_distribution<int> dist(0, i);
        int j = dist(gen);

        int temp = shuffled_arr[i];
        shuffled_arr[i] = shuffled_arr[j];
        shuffled_arr[j] = temp;
    }

    return shuffled_arr;
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Original Array: ";
    printArray(arr, size);

    cout << "Pure Function: ";
    int* resultPure = shuffle_pure(arr, size);

    cout << "Shuffled Array: ";
    printArray(resultPure, size);

    cout << "Modifier Function: ";
    shuffle(arr, size);

    std::cout << "Original Array new version:: ";
    printArray(arr, size);
    

    
}
