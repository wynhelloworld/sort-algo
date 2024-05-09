#include <iostream>
#include "BubbleSort.hpp"
#include "SelectSort.hpp"
#include "InsertSort.hpp"
#include "ShellSort.hpp"
#include "HeapSort.hpp"
#include "MergeSort.hpp"
#include "QuickSort.hpp"
#include "QuickSelectSort.hpp"

void Print(const std::vector<int> &arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {

    std::vector<int> numbers = {5, 2, 8, 1, 9, 3, 7, 4, 6};

    // BubbleSort(numbers);
    // SelectSort(numbers);
    // InsertSort(numbers);
    // ShellSort(numbers);
    // HeapSort(numbers);
    // MergeSort(numbers);
    // QuickSort(numbers); 
    QuickSelectSort(numbers);

    Print(numbers);

}
