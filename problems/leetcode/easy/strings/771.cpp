/*You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".
 */

#include <iostream>
using namespace std;

int main(){
	string jewels;
	string stones;
	int retval = 0;
        for (int i = 0 ; i < jewels.length(); i++){
            for (int j = 0; j < stones.length(); j++){
                if (stones[j] == jewels[i]) {
                    retval++;
                }
            }
        }
        return retval;

}


// LC Style
class Solution {
public:
        int retval = 0;
	// O(n^2) brute force -- double for loop
	for (int i = 0 ; i < jewels.length(); i++){
            for (int j = 0; j < stones.length(); j++){
                if (stones[j] == jewels[i]) {
                    retval++;
                }
            }
        }
        return retval;

    }
};
