// There is a programming language with only four operations and one variable X:

// ++X and X++ increments the value of the variable X by 1.
// --X and X-- decrements the value of the variable X by 1.
// Initially, the value of X is 0.

// Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.

// Input: operations = ["--X","X++","X++"]
// Output: 1
// Explanation: The operations are performed as follows:
// Initially, X = 0.
// --X: X is decremented by 1, X =  0 - 1 = -1.
// X++: X is incremented by 1, X = -1 + 1 =  0.
// X++: X is incremented by 1, X =  0 + 1 =  1.

// Constraints:

// 1 <= operations.length <= 100
// operations[i] will be either "++X", "X++", "--X", or "X--".

include <iostream>
using namespace std;

int main(){

}

class Solution {
    // O(n) Time-Complexity
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;   // counter
        for(auto s:operations){
            if(s[1] == '-')   // only first char needs checked
                x--;
            else
                x++;
        }
        return x;
    }
};

// 4ms Runtime w/ 14.1 MB Space -- Pass