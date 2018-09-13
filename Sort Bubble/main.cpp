#include <iostream>

using namespace std;
void print(int* arr, int tam);
void bubble(int* arr, int tam);
void insertion(int* arr, int tam);
void merge()

int temp;
bool bandera;

void bubble(int* arr, int tam) {
    for(int i = 1; i < tam; i++) {
        for(int j = 0; j < tam - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
                
                print(arr,tam);
            }
        }
        //print(arr,tam);
    }
    cout << "\n";
}
void insertion(int* arr, int tam) {
    for(int i = 1; i < tam; i++) {
        for(int j = i; j >= 1; j--) {
            if (arr[j] < arr[j - 1]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                print(arr,tam);
            } //else break;
        }
    }
}

void print(int* arr, int tam) {
    for(int i = 0; i < tam; i++) {
        cout << arr[i] << endl;
    }
}
int main(int argc, char** argv) {
    int a[6] = {19,9,76,17,4,18};
    int aux[6];
    print(aux,6);
    //bubble(a,6);
    insertion(a,6);
    return 0;
}

