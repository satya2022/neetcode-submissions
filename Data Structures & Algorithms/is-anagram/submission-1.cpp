class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n != m){
            return 0;
        }
      sort(s.begin(), s.end());
      sort(t.begin(), t.end());
      for(int i=0;i<n;i++){
        if(s[i] != t[i]){
            return 0;
        }
      }
     return 1;
        
    }

    /* s=""     t=""
 ↓        ↓
size=0  size=0
 ↓
same size? YES
 ↓
sort → still ""
 ↓
loop → 0 times
 ↓
return 1
 ↓
TRUE ✅ */
};
