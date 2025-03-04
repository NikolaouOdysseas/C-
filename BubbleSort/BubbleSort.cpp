//    O(n^2)

#include <iostream>

void BubbleSort(int array[], int size);

int main() {
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);

    for (int element : array) {
        std::cout << element << ' ';
    }

    std::cout << std::endl;

    BubbleSort(array, size);

    for (int element : array) {
        std::cout << element << ' ';
    }

    std::cout << std::endl;

    return 0;
}

void BubbleSort(int array[], int size) {
    int temp;

    for(int i=0; i < size-1; i++){
        for(int j=0; j < size - i -1; j++){
            if(array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array [j+1];
                array [j+1] = temp;
            }
        }
    }
}


