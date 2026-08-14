/* class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int maxLen = 0;

        for(int i = 0; i < fruits.size(); i++) {

            unordered_set<int> st;

            for(int j = i; j < fruits.size(); j++) {

                st.insert(fruits[j]);

                if(st.size() > 2) {
                    break;
                }

                maxLen = max(maxLen, j - i + 1);
            }
        }

        return maxLen;
    }
}; */

class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int, int> mp;

        int i = 0; 
        int maxLen = 0;

        for(int j = 0; j < fruits.size(); j++){
            mp[fruits[j]]++;
            
            while(mp.size() > 2){
                mp[fruits[i]]--;

                if(mp[fruits[i]] == 0){
                    mp.erase(fruits[i]);
                    
                }
                i++;
                 
            }
            maxLen = max(maxLen, j - i + 1);
        }

        return maxLen;
    }

};