#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	string getEncryptedString(string s, int k) {
		string ans = "";
		for (int i = 0; i < s.size(); i++) {
			ans.push_back(s[(i + k + s.size()) % s.size()]);
		}
		return ans;
	}
};