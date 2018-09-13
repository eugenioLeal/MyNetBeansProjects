#include <iostream>

using namespace std;
void print(int* arr, int tam);
void selection(int* a, int tam);
void swap(int a, int b);

int minimo;
int temp;


void selection(int* a, int tam) {
    for(int i = 0; i < tam - 1; i++) {
        int minimo = i;
        for(int j = i + 1; j < tam; j++) {
            if ( a[j] < a[minimo]) {
                minimo = j; 
                

            }
        }
        if (minimo != i) {
            temp = a[i];
            a[i] = a[minimo];
            a[minimo] = temp;
        }
    }
    print(a,tam);
}
void print(int* arr, int tam) {
    for(int i = 0; i < tam; i++) {
        cout << arr[i] << endl;
    }
}

int main(int argc, char** argv) {
    int arr[6] = {37,207,22,5,19,92};
    selection(arr, 6);
    return 0;
}

