// // Leetcode 205 (Isomorphic Strings)
// class Solution {
//     public:
//         bool isIsomorphic(string s, string t) {
//             if(s.length()!=t.length()) return false;
//             vector<int> v(150,1000);
//             for(int i=0;i<s.length();i++){
//                 int idx=(int)s[i];
//                 if(v[idx]==1000) v[idx]=s[i]-t[i];
//                 else if(v[idx]!=s[i]-t[i]) return false;
//             }
//             return true;
//         }
//     };