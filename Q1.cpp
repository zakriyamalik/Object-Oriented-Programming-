//#include<iostream>
//using namespace std;
//void initializeArray(int*& Arr, int& size);
//void growArray(int*& Arr, int& size);
//int* shrinkArray(int* Arr, int& size);
//void printArray(const int* arr, const int size); // print the size and elements of the array.
//int main()
//{
//    int Size=0,choice=0;
//    int* Arr=new int[Size];
//    cout << "Enter the choice to check the functions\n(1) Enter one to initialize\n(2)Enter two to grow\n(3) Enter 3 to shrink the array\n(4) Enter 4 to print the array" << endl;
//    cin >> choice;
//    if (choice == 1)
//    {
//        initializeArray(Arr, Size);// ask the user to enter size of the array
//        //and then populate the array.
//    }
//    else if (choice == 2)
//    {
//        growArray(Arr, Size);
//
//    }
//    else if (choice == 3)
//    {
//        int* x = shrinkArray(Arr, Size);
//    }
//    else if (choice == 4)
//    {
//        printArray(Arr, Size);
//    }
//    else
//    {
//        cout<<"Invalid choice"<<endl;
//    }
//}
//void initializeArray(int*&Arr,int & size)
//{
//    cout << "Initializing the array....." << endl;
//    cout << "Enter the size of array" << endl;
//    cin >> size;
//    for (int i = 0; i < size; i++)
//    {
//        cout << "Enter data of digit " << i + 1 << " of the array" << endl;
//        cin >> Arr[i];
//        while (cin.fail()) {
//            cout << "Again!!!Just enter +ve values" << endl;
//            cin.clear();
//            cin.ignore(256, '\n');
//            cin >> Arr[i];
//        }
//    }
//    cout << "The Data is" << endl;
//    for (int i = 0; i < size; i++)
//    {
//        cout << Arr[i] << " ";
//    }
//} // void growArray(int*& Arr, int& size); // grow the passed array by size one: create a new temporary array of size (size+1), copy all the element of old 
////array to new array, delete the old array, and point the new array to old array.
//void growArray(int*& Arr, int& size)
//{
//    int new_size = size + 1;
//    // int* new_array = new int[new_size];
//    cout << "\nGrowing Array......." << endl;
//    int* temp = new int[new_size];
//    for (int i = 0; i < size; i++)
//    {
//        *(temp + i) = *(Arr + i);
//    }cout << "Enter the data for growing\n";
//    for (int i = size; i < new_size; i++)
//    {
//        cin >> *(temp + i);
//        while (cin.fail()) {
//            cout << "Again!!!Just enter +ve integer data in array" << endl;
//            cin.clear();
//            cin.ignore(256, '\n');
//            cin >> *(temp + i);
//        }
//
//        size = new_size;
//       // delete[]Arr;//As when i am deleting it is showing an error by removing delete keyword it is not showing
//       //the error as i have discussed with sir in the lab
//        //Arr = nullptr;
//        Arr = temp;
//        cout << "The grown array is " << endl;
//        for (int i = 0; i < new_size; i++)
//        {
//            cout << Arr[i] << " ";
//        }
//        cout << endl;
//    }
//}
//    int *shrinkArray(int* Arr, int& size)// shrink the array by size one.
//{
//    int new_size = size - 1;
//    // int* new_array = new int[new_size];
//    cout << "\nShrinking Array......." << endl;
//    int* temp = new int[new_size];
//    for (int i = 0; i < new_size; i++)
//    {
//        *(temp + i) = *(Arr + i);
//    }
//    size = new_size;
//   // delete[]Arr;//As when i am deleting it is showing an error by removing delete keyword it is not showing
//    //the error as i have discussed with sir in the lab
//     //Arr = nullptr;
//    Arr = temp;
//    cout << "The shrinked array is " << endl;
//    for (int i = 0; i < new_size; i++)
//    {
//        cout << Arr[i] << " ";
//    }
//    cout << endl;
//    return Arr;
//}
//    void printArray(const int* arr, const int size)
//    {
//        cout << "Printing the size and content of array" << endl;
//        cout << "The size of array is \n" ;
//        cout << size<<endl;
//        cout << "The content of array are " << endl;
//        for (int i = 0; i < size; i++)
//        {
//            cout << arr[i] << " ";
//        }
//    }