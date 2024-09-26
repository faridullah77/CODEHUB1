// File: arrays.cpp
// Author: Faridullah
// Created on: 2023-10-06
// Last Modified: 2023-10-06

    #include <iostream>
    #include <vector>

    using namespace std;

    // Add your function declarations and implementations here

    int main() {
        int ages[3];
        int ages2[3];
        bool is_equal = true;
        // asking users for input
        for (int i = 0; i < 3; i++) {
            cin >> ages[i];
        }
        for (int i = 0; i < 3; i++) {
            cin >> ages2[i];
        }
        // comparing the two arrays
        for (int i = 0; i < 3; i++) {
            if (ages[i] != ages2[i]) {
                is_equal = false;
                break;
            }
        }
        if (is_equal) {
            cout << "The arrays are equal" << endl;
        } else {
            cout << "The arrays are not equal" << endl;
        }

        return 0;
    }




