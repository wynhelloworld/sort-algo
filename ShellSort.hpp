#include <vector>

void ShellSort(std::vector<int> &arr) {
    int n = arr.size();
    int gap = n;
    while (gap > 0) {
        gap /= 2;
        for (int i = 0; i < n - gap; ++i) {
            int end = i;
            int tmp = arr[end + gap];
            while (end >= 0) {
                if (arr[end] > tmp) {
                    arr[end + gap] = arr[end];
                    end -= gap;
                } else {
                    break;
                }
            }
            arr[end + gap] = tmp;
        }
    }
}