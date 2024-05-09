#include <vector>

void _MergeSort(std::vector<int> &arr, int left, int right) {
    if (left >= right) {
        return;
    } 
    int mid = left + (right - left) / 2;
    _MergeSort(arr, left, mid);
    _MergeSort(arr, mid + 1, right);
    std::vector<int> tmp(right - left + 1);
    int left1 = left, right1 = mid;
    int left2 = mid + 1, right2 = right;
    int index = 0;
    while (left1 <= right1 && left2 <= right2) {
        if (arr[left1] <= arr[left2]) {
            tmp[index++] = arr[left1++];
        } else {
            tmp[index++] = arr[left2++];
        }
    }
    while (left1 <= right1) {
        tmp[index++] = arr[left1++];
    }
    while (left2 <= right2) {
        tmp[index++] = arr[left2++];
    }
    for (int i = left; i <= right; ++i) {
        arr[i] = tmp[i - left];
    }
}

void MergeSort(std::vector<int> &arr) {
    int n = arr.size();
    _MergeSort(arr, 0, n - 1);    
}
