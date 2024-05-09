#include <vector>

void AdJustDown(std::vector<int> &arr, int parent, int n) {
    int child = parent * 2 + 1;
    while (child < n) {
        if (child + 1 < n && arr[child] < arr[child + 1]) {
            ++child;
        }
        if (arr[parent] < arr[child]) {
            std::swap(arr[parent], arr[child]);
            parent = child;
            child = parent * 2 + 1;
        } else {
            break;
        }
    }
}

void AdJustUp(std::vector<int> &arr, int child) {
    int parent = (child - 1) / 2;
    while (parent >= 0) {
        if (arr[parent] < arr[child]) {
            std::swap(arr[parent], arr[child]);
            child = parent;
            parent = (child - 1) / 2;
        } else {
            break;
        }
    }
}

void HeapSort(std::vector<int> &arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; --i) {
        AdJustDown(arr, i, n);
    }
    for (int i = n - 1; i > 0; --i) {
        std::swap(arr[0], arr[i]);
        AdJustDown(arr, 0, i);
    }
}
