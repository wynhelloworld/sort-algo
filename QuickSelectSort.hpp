#include <vector>

void _QuickSelectSort(std::vector<int> &arr, int low, int high) {
    if (low >= high) {
        return;
    }
    int key = arr[low + rand() % (high - low + 1)];
    int left = low - 1;
    int right = high + 1;
    int i = low;
    while (i < right) {
        if (arr[i] < key) {
            std::swap(arr[++left], arr[i++]);            
        } else if (arr[i] == key) {
            ++i;
        } else {
            std::swap(arr[i], arr[--right]);
        }
    }
    _QuickSelectSort(arr, low, left);
    _QuickSelectSort(arr, right, high);
}

void QuickSelectSort(std::vector<int> &arr) {
    int n = arr.size();
    _QuickSelectSort(arr, 0, n - 1);
}
