
// ### ✅ **Intuition**

// To make a group of `numFriends` people happy, we may need to select the lexicographically largest substring of a specific length. If there is only 1 friend, we return the entire word. Otherwise, we want the substring of length `word.length() - numFriends + 1` that is the greatest lexicographically.

// ---

// ### 🧠 **Approach**

// * If `numFriends == 1`, return the entire string.
// * Otherwise:

//   * Calculate the required substring length: `L = word.length() - numFriends + 1`.
//   * Iterate over all possible substrings of length `L` in the string `word`.
//   * Use `max()` to track the lexicographically largest substring among all possibilities.
// * Return the final result.



// ### ⏱️ **Complexity**

// * **Time complexity:**
//   $O(n \cdot L)$ where $n$ is the length of `word`, and $L = word.length() - numFriends + 1$,
//   because each `substr(i, L)` takes $O(L)$ time in C++.

// * **Space complexity:**
//   $O(1)$ auxiliary space,
//   though each substring takes temporary space during comparisons.



#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string answerString(string word, int numFriends) {
        if (numFriends == 1) return word;
        string res = "";
        int len = word.length() - numFriends + 1;
        for (int i = 0; i <= word.length() - len; i++) {
            res = max(res, word.substr(i, len));
        }
        return res;
    }
};



