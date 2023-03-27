// 1108. Defanging an IP Address

// PS: Given a valid (IPv4) IP address, return a defanged version of that IP address.
// A defanged IP address replaces every period "." with "[.]".

// Examples:
// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Input: address = "255.100.50.0"
// Output: "255[.]100[.]50[.]0"

// Constraints:
// The given address is a valid IPv4 address.

#include <iostream>
using namespace std;

int main(){
    string address;
    // Ugly Bute force
    string delim = "[.]";

    string new_str = "";

    for (int i = 0; i < address.length(); i++)
    {
        if (address[i] != '.') {
            new_str.push_back(address[i]);
        } else {
            new_str = new_str + delim;
        }
    }
    // Need to return -- use lc format or wrap in diff function
}



// LC Format
class Solution {
public:
    string defangIPaddr(string address) {
            // Ugly Bute force
    string delim = "[.]";

    string new_str = "";

    // TC would be O(n) since the for loop iterates 0 - n where
    // n is length of the string
    for (int i = 0; i < address.length(); i++)
    {
        if (address[i] != '.') {
            new_str.push_back(address[i]);
        } else {
            new_str = new_str + delim;
        }
    }
    }
};


// Passing - 0ms Runtime and 6 MB of mem usage