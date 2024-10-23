#include <iostream>
using namespace std;

// Partition ফাংশন: পিভট অনুযায়ী উপাদানগুলো ভাগ করে।
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // শেষ উপাদানকে পিভট ধরা হলো
    int i = low - 1;       // ছোট উপাদান রাখার জন্য সূচক i

    for (int j = low; j < high; j++) {
        // যদি arr[j] পিভটের চেয়ে ছোট হয়, তাহলে swap করি
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // পিভটকে সঠিক স্থানে আনতে swap করি
    swap(arr[i + 1], arr[high]);
    return (i + 1); // পিভটের সঠিক অবস্থান ফেরত দিই
}

// Quick Sort রিকার্সিভ ফাংশন
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // partitionIndex পিভটের সঠিক স্থান পায়
        int partitionIndex = partition(arr, low, high);

        // পিভটের বাম অংশে এবং ডান অংশে রিকার্সিভভাবে Sort
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

// অ্যারের উপাদান প্রিন্ট করার জন্য ফাংশন
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// মেইন ফাংশন
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"the size is: "<<n;

    cout << "Unsorted Array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1); // Quick Sort কল করি

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}
