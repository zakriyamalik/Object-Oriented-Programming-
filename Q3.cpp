//#include<iostream>
//#include<cstdlib>
//void printing(int*& ptr, int& size);
//using namespace std;
//
//int main() {
//    int size = 5; //initial size of the array
//    int* array = new int[size]; //allocating memory for the array
//    int count = 0; //count of elements in the array
//
//    int input;
//    cout << "Enter integers (-1 to stop): ";
//    cin >> input;
//    while (input != -1) {
//        if (count == size) { //array is full
//            //double the size of the array
//            int* temp = new int[2 * size];
//            for (int i = 0; i < size; i++) {
//                *(temp + i) = *(array + i);
//            }
//            delete[] array; //deallocating memory for the previous array
//            array = temp;
//            size = 2 * size;
//        }
//        //adding the element to the array
//        array[count++] = input;
//        cin >> input;
//    }
//    printing(array, count);
//}
//void printing(int* &ptr, int &size)
//{
//    //printing the elements in reverse order
//    cout << "Numbers in reverse order: "<<endl;
//    for (int i = size - 1; i >= 0; i--)
//    {
//        cout << *(ptr + i) << endl;
//    }
//}