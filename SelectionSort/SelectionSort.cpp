#include <iostream>

using namespace std;

void Selection_Sort(int a[], int size);

int main() {
    int a[] = {6 ,5 ,3, 2, 1, 4};
    int size = 6;

    for(int i = 0; i < size; i++) {
        cout << "a[" << i << "] = " << a[i] << ' ';
    }
    cout << '\n';

    Selection_Sort(a,size);

    for(int i = 0; i < size; i++) {
        cout << "a[" << i << "] = " << a[i] << ' ';

    }
    cout << '\n';

    return 0;
}

void Selection_Sort(int a[], int size) {
    for(int i = 0; i < size-1; i++) {
        int min_pos = i;
        for(int j = i + 1; j < size; j++) {
            if(a[j] < a[min_pos]) {
                min_pos = j;
            }
        }
        if(min_pos != i) {
            int tmp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = tmp;
        }
    }
}