/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 

Constraints:

1 <= s.length <= 105
s[i] is a printable ascii character.
*/

// Iterative C++ program to reverse a String
#include <bits/stdc++.h>

using namespace std;

   void reverseString(vector<char>& s) {
        
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            char swap=s[i];
            s[i]=s[j];
            s[j]=swap;
        }
        
    }	


void printString(vector<char>& s)
{
for (int i = 0; i < s.size(); i++)
cout << s[i] << " ";

cout << endl;
}

/* Driver function to test above functions */
int main()
{
std::vector<char> arr({ 'a', 'b', 'c' });
	


	// To print original array

	// Function calling
	reverseString(arr);
	
	cout << "Reversed String is" << endl;
	
	// To print the Reversed array
	printString(arr);
	
	return 0;
}
