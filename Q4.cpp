//#include <iostream>
//
//using namespace std;
//
//// Function to copy the elements of one array to another
//void copyArray(int arr[], int arr1[], int size) {
//    for (int i = 0; i < size; i++) {
//        arr1[i] = arr[i];
//    }
//}
//
//// Function to reduce the elements of the array
//int reduceArray(int arr[], int arr1[], int size) {
//    int reduce_size;
//    cout << "Enter the size to reduce the array: ";
//    cin >> reduce_size;
//
//    // Check if the reduce_size is valid
//    if (reduce_size > size) {
//        cout << "Invalid size! Cannot reduce the array by more than its original size." << endl;
//        return size;
//    }
//
//    for (int i = 0; i < reduce_size; i++) {
//        arr1[i] = arr[i];
//    }
//
//    return reduce_size;
//}
//
//// Function to print the elements of the array
//void printArray(int arr[], int size) {
//    if (size == 0) {
//        cout << "Array is empty." << endl;
//    }
//    else {
//        cout << "The elements of the array are: ";
//        for (int i = 0; i < size; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int size;
//    cout << "Enter the size of the array: ";
//    cin >> size;
//
//    int* arr = new int[size];
//    int* arr1 = new int[size];
//
//    cout << "Enter the elements of the array: ";
//    for (int i = 0; i < size; i++) {
//        cin >> arr[i];
//    }
//
//    copyArray(arr, arr1, size);
//    int reduced_size = reduceArray(arr, arr1, size);
//
//    cout << "Original array: ";
//    printArray(arr, size);
//
//    cout << "Copied array: ";
//    printArray(arr1, size);
//
//    cout << "Reduced array: ";
//    printArray(arr1, reduced_size);
//
//    delete[] arr;
//    delete[] arr1;
//
//    return 0;
//}