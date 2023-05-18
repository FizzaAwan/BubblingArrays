// Bubble sort
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void bubble_pass (T a[], int n) {
	// Performs a single bubble pass on the array of size N
	for (int i = 0; i < n - 1; i++) {
		// If adjacent elements are out of order, swap them
		if (a[i + 1] < a[i]) {
			T temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}
}

template <typename T>
void bubble_sort (T a[], int n) {
	// Perform N-1 bubble passes to sort the array of size N
	for (int i = 0; i < n - 1; i++)
		bubble_pass(a, n);
}

template <typename T> 
void print (const T a[], int n) {
	// Output all elements of the array of size N
	for (int i = 0; i < n; i++)
		cout << ' ' << a[i];
	cout << endl;
}
int main() {

int array1[] = { 4, 10, 7, 2, 15, 7, 1, 8 };
cout << "Before:";
print(array1, 8);
bubble_sort(array1, 8);
cout << " After:";
print(array1, 8);
  
  
double array2[] = { 4.1, 1.2, 7.3, 2.2, 0.5, 2.9, 6.1, 9.9 };
cout << "Before:";
print(array2, 8);
bubble_sort(array2, 8);
cout << " After:";
print(array2, 8);

string array3[] = { "dog", "cat", "bird", "frog", "mouse", "aardvark" };
cout << "Before:";
print(array3, 6);
bubble_sort(array3, 6);
cout << " After:";
print(array3, 6);

	return 0;
}
