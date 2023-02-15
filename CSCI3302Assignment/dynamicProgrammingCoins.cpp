// Question 1:
// Write a program code for coin-row problem using dynamic programming (constraint same as in the class slides; NO TWO adjacent coin).
// Test case 1: 
// Input: 5,  1,  2,  10,  6,  2
// Output: 17

// Test case 2:
// Input: 7,  2,  1,  12,  5
// Output: (Please find by yourself)

// Question 2: 
// Write a program code for the knapsack problem using dynamic programming (constraint same as in the class slides; items are NOT divisible).

// Test Case 1
// Input:-
// ITEM   WEIGHT    VALUE   CAPACITY
//  1   |   2    |  $12   | 
//  2   |   1    |  $10   | w = 5
//  3   |   3    |  $20   | 
//  4   |   2    |  $15   |  

// Output:-
// 0   0   0   0   0   0 
// 0   0  12  12  12  12 
// 0  10  12  22  22  22
// 0  10  12  22  30  32
// 0  10  15  25  30  37

// Maximum Value: 37

// Test Case 2:-
// Input:-
// ITEM   WEIGHT    VALUE   CAPACITY
//  1   |   3    |  $13   | 
//  2   |   1    |  $12   | 
//  3   |   1    |  $10   | w = ?
//  4   |   2    |  $17   |  
//  5   |   2    |  $15   |  

// Output:-
// 0   0   0   0   0   0 
// 0   ?   ?   ?   ?   ? 
// 0   ?   ?   ?   ?   ? 
// 0   ?   ?   ?   ?   ?
// 0   ?   ?   ?   ?   ?

// Maximum Value: ??

#include <iostream>
using namespace std;

int main()  {

    // Variables
    int sentinel;


    while (sentinel != 0)   {
        cout << "Press 1 for Coin-Row" << endl;
        cout << "Press 2 for Knapsack" << endl;
        cout << "Press 0 to Exit" << endl;

        cin >> sentinel;

        switch (sentinel)   {
            // Coin-Row Problem
            case 1:
            cout << "Coin-Row Problem" << endl;
            cout << "Enter your coin: " << endl;
            // cin >> 
            


            // Knapsack Problem
            case 2:
            cout << "Knapsack Problem" << endl;

            case 0:
            return 0;
        }
    }
    
    return 0;
}