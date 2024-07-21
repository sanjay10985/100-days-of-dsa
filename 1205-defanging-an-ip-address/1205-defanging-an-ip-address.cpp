class Solution {
public:
    string defangIPaddr(string address) {
        string defange;
        for(int i = 0;i<address.length();i++){
            if(address[i] == '.'){
                defange += "[.]";
                continue;
            }
            defange += address[i];
        }
    return defange;
    }

};