#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> frequency;

    for (char c : s) {
        frequency[c]++;
    }

      for (int i = 0; i < s.length(); i++) {
        if (frequency[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}   

int main() {
    string s1 = "leetcode";
    int index1 = firstUniqChar(s1);
    cout << "Output 1: " << index1 << endl;

    string s2 = "loveleetcode";
    int index2 = firstUniqChar(s2);
    cout << "Output 2: " << index2 << endl;

    string s3 = "aabb";
    int index3 = firstUniqChar(s3);
    cout << "Output 3: " << index3 << endl;

    return 0;
}

