#include <vector>

int Internal(std::vector<int> &arr, int left, int right) {
    int keyi = left;
    while (left < right) {
        while (left < right && arr[right] >= arr[keyi] && --right);
        while (left < right && arr[left] <= arr[keyi] && ++left);
        std::swap(arr[left], arr[right]);
    }
    return left;
}

void _QuickSort(std::vector<int> &arr, int left, int right) {
    if (left >= right) {
        return;
    } 
    int keyi = Internal(arr, left, right);
    std::swap(arr[left], arr[keyi]);
    _QuickSort(arr, left, keyi - 1);
    _QuickSort(arr, keyi + 1, right);
}

void QuickSort(std::vector<int> &arr) {
    int n = arr.size();
    _QuickSort(arr, 0, n - 1);
}
