#include <iostream>
#include <string>
using namespace std;




int main() {
    std::string arr[] = {"apple", "banana", "cherry"};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int left = 0;
        int right = arr[i].length() - 1;

        // Swap characters from both ends
        while (left < right) {
            char temp = arr[i][left];
            arr[i][left] = arr[i][right];
            arr[i][right] = temp;

            left++;
            right--;
        }
    }

    std::cout << "Reversed characters in each string:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
