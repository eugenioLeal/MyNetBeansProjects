#include <iostream>

using namespace std;

void print(int arr[]);


    



void print(int arr[]) {
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << endl;
    }
}

int main(int argc, char** argv) {
    int a[6] = {13,53,3,48,20,88};
//    void mergeSort(int array[], int aux[], int left, int right)
    quickSort();
    print(a);
    return 0;
}

