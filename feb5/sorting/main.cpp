#include "utils.h"

int main() {
    const int N = 5;
    int arr[N] = {3, 2, 0, 5, 2};

    print(arr, N);
    sort(arr, N);
    print(arr, N);
    
    return 0;
}
