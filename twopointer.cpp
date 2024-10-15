#include <iostream>
using namespace std;

// ফাংশন যা একটি 2D অ্যারে তৈরি করে
void create2DArray(int*** arr, int rows, int cols) {
    // প্রথমে মেমরি বরাদ্দ করা
    *arr = new int*[rows]; // সারির জন্য পয়েন্টার অ্যারে
    for (int i = 0; i < rows; i++) {
        (*arr)[i] = new int[cols]; // প্রতিটি সারির জন্য কলামের জন্য মেমরি বরাদ্দ
    }

    // মান এবং ঠিকানা সেট করা
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            (*arr)[i][j] = i * cols + j + 1; // মান সেট করা
        }
    }
}

// মেমরি মুক্ত করার ফাংশন
void delete2DArray(int** arr, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] arr[i]; // প্রতিটি সারির জন্য মেমরি মুক্ত করা
    }
    delete[] arr; // সারির জন্য পয়েন্টার অ্যারে মুক্ত করা
}

int main() {
    int rows = 3, cols = 4;
    int** myArray; // ডাবল পয়েন্টার ঘোষণা
    cout<<&myArray<<endl;

    create2DArray(&myArray, rows, cols);

    // 2D অ্যারে তৈরি করা

    // 2D অ্যারের মান এবং ঠিকানা প্রিন্ট করা
    cout << "2D Array values and their memory addresses:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Value: " << myArray[i][j] << " | Address: " << &myArray[i][j] << endl;
        }
        cout << endl; // নতুন লাইনে চলে যাওয়া
    }

    // মেমরি মুক্ত করা
    delete2DArray(myArray, rows);
    return 0;
}
