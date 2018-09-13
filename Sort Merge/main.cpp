#include <iostream>

using namespace std;
void mergeSort(int array[], int aux[], int left, int right);
void merge(int array[], int aux[], int left, int right);
void print(int arr[]);


void mergeSort(int array[], int aux[], int left, int right) {
    if (left == right) return; 
    int middleIndex = (left + right)/2;
    mergeSort(array, aux, left, middleIndex);
    mergeSort(array, aux, middleIndex + 1, right);
    merge(array, aux, left, right);
  
    for (int i = left; i <= right; i++) {
        array[i] = aux[i];
    }
    
}    

void merge(int array[], int aux[], int left, int right) {
    int middleIndex = (left + right)/2;
    int leftIndex = left; 
    int rightIndex = middleIndex + 1;
    int auxIndex = left;
    while (leftIndex <= middleIndex && rightIndex <= right) {
        if (array[leftIndex] <= array[rightIndex]) {
            aux[auxIndex] = array[leftIndex++];
        } else {
            aux[auxIndex] = array[rightIndex++];
        }
        auxIndex++;
    }
    while (leftIndex <= middleIndex) {
        aux[auxIndex] = array[leftIndex++];
        auxIndex++;
    }
    while (rightIndex <= right) {
        aux[auxIndex] = array[rightIndex++];
        auxIndex++;
    }
}

void print(int arr[]) {
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << endl;
    }
}

int main(int argc, char** argv) {
    int a[6] = {13,53,3,48,20,88};
    int aux[6] = {13,53,3,48,20,88};
//    void mergeSort(int array[], int aux[], int left, int right)
    mergeSort(a,aux,0,5);
    print(a);
    return 0;
}

