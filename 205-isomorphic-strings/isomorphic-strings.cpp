// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         if(s.size() != t.size())return false;
//         vector<int>v(150,1000);
//         for(int i=0 ; i<s.size();i++)
//         {
//             int idx = (int)s[i];
//             if(v[idx]==1000) v[idx] = s[i] - t[i];
//             else if(v[idx] !=(s[i]-t[i]))return false;
//         }
//         // empty the vecto
//         for(int i =0;i<150;i++)
//         v[i]  = 1000;
//         for(int i=0 ; i<s.size();i++)
//         {
//             int idx = (int)t[i];
//             if(v[idx]==1000) v[idx] = t[i] - s[i];
//             else if(v[idx] !=(t[i]-s[i]))return false;
//         }
//         return true;


        

//     }
// };
////using two vwctro appraoch
class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size() != t.size())
            return false;

        vector<int> mp1(256, -1);
        vector<int> mp2(256, -1);

        for(int i = 0; i < s.size(); i++)
        {
            int a = s[i];
            int b = t[i];

            if(mp1[a] == -1 && mp2[b] == -1)
            {
                mp1[a] = b;
                mp2[b] = a;
            }
            else
            {
                if(mp1[a] != b || mp2[b] != a)
                    return false;
            }
        }

        return true;
    }
};