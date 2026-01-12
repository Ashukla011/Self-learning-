#include <iostream>
#include <vector>
using namespace std;

// Function to make the array palindrome by adding consecutive elements
int makePalindrome(vector<int>& arr) {
    int i = 0;
    int j = arr.size() - 1;
    int count = 0;

    while (i < j) {
        if (arr[i] == arr[j]) {
            i++;
            j--;
        } else if (arr[i] < arr[j]) {
            arr[i + 1] += arr[i];
            i++;
            count++;
        } else {
            arr[j - 1] += arr[j];
            j--;
            count++;
        }
    }
    return arr;
}

int main() {
    vector<int> input1 = {37, 51, 45, 50, 75, 50, 133};
    vector<int> input2 = {15, 25, 10, 34, 25, 15};

    // Merge both arrays by adding input2 to input1 up to input2's size
    for (int i = 0; i < input2.size(); i++) {
        input1[i] += input2[i];
    }

    // Now input1 is the final array
    int result = makePalindrome(input1);

    cout << "Minimum operations to make palindrome: " << result << endl;
    return 0;
}
