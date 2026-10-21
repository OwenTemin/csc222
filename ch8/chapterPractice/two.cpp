#include <iostream>
#include <random>

void manualShuffle(int arr[], size_t n) {
    std::random_device rd;
    std::mt19937 g(rd());

    // Loop backward and swap each element with a random previous element
    for (size_t i = n - 1; i > 0; --i) {
        // Create a distribution from index 0 to i
        std::uniform_int_distribution<size_t> dist(0, i);
        size_t j = dist(g);

        // Swap the elements
        std::swap(arr[i], arr[j]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    manualShuffle(arr, n);

    for (int x : arr) std::cout << x << " ";
    return 0;
}
