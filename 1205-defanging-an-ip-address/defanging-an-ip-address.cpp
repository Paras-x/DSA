class Solution {
public:
    string defangIPaddr(string address) {

        string p = "";

        for (int i = 0; i < address.size(); i++) {

            if (address[i] == '.') {
                p += "[.]";
            } else {
                p += address[i];
            }
        }
        return p;
    }
};