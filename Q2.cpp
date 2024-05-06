/*Take two arrays of integers A and B of sizes M and N respectively (M and N taken from User). Then you need to mix these arrays into a third array named C such that the following sequence is followed. 
All even numbers of A from left to right are copied into C from left to right. 
All odd numbers of A from left to right are copied into C from right to left. 
All even numbers of B from left to right are copied into C from left to right. 
All old numbers of B from left to right are copied into C from right to left.

A, B and C are the arrays to Mix. e.g., A is {3, 2, 1, 7, 6, 3} and B is {9, 3, 5, 6, 2, 8, 10} the resultant array C is {2, 6, 6, 2, 8, 10, 5, 3, 9, 3, 7, 1, 3}
	Display all of the arrays with proper label to show the result.
*/
#include<iostream>
using namespace std;
void mix_array(int* A, int* B, int* C, int M, int N);
void print(int* A, int* B, int* C, int M, int N, int O);
int main()
{
	int M=0, N=0;
	cout << "Enter the size of array A\n";
	cin >> M;
	int* A=new int [M];
	cout << "Enter the contents in array A "<<endl;
	for(int i = 0; i < M; i++)
	{
		cin >> A[i];
	}
	cout << "Enter the size of array B\n";
	cin >> N;
	//int* A = new int[M];
	int* B = new int[N];
	cout << "Enter the contents in array B "<<endl;
	for (int i = 0; i < N; i++)
	{
		cin >> B[i];
	}
	int O = M + N;
	int* C = new int[O];
	mix_array(A, B, C, M, N);
	print( A, B,  C, M, N,  O);
}
void mix_array(int* A, int* B,int *C ,int M, int N)
{
	int i, j =0, k;
	// Adding even numbers of A to C
		for ( i = 0; i < M; i++) {
			if (A[i] % 2 == 0) {
				C[j] = A[i];
				j++;
			}
		}

		// Adding odd numbers of A to C from end
		for ( i = M - 1; i >= 0; i--) {
			if (A[i] % 2 != 0) {
				C[j] = A[i];
				j++;
			}
		}

		//Adding even numbers of B to C
		for ( i = 0; i < N; i++) {
			if (B[i] % 2 == 0) {
				C[j] = B[i];
				j++;
			}
		}

		// Adding odd numbers of B to C from end
		for ( i = N - 1; i >= 0; i--) {
			if (B[i] % 2 != 0) {
				C[j] = B[i];
				j++;
			}
		}
}
void print(int* A, int* B, int* C, int M, int N, int O)
{
	cout << "The contents in array A " << endl;
	for (int i = 0; i < M; i++)
	{
		cout << A[i] << " ";
	}
	cout << "The contents in array B " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;
	cout << "The contents of array C are " << endl;
	for (int i = 0; i < N + M; i++)
	{
		cout << C[i] << " ";
	}
}