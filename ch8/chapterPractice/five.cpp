#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Memory Unsafe Arrays:" << endl;
    cout << "This is whats in the array with five items: " << endl;
    int i = 0;
    while (i < 5){
        cout << arr[i] << endl;
        i++;
    }
    cout << "This is what happens when you call the array at an index that is not defined" << endl;
    cout << arr[6] << endl;
}
