 #include<iostream>
 using namespace std;

void reversearray(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    reversearray(arr, size);

    cout << "The reversed array is:";
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}

void reversearray(int arr[], int size) {
    int i, j, temp;
    for (i = 0, j = size - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}