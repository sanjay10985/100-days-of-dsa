class Solution {
public:
    bool isValid(string s) {
        int length = s.length();
        stack<char> st;

        for(char ch: s){
            if(isOpen(ch)){
                st.push(ch);
            }else{
                if(!st.empty() && isPair(st.top(),ch)){
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }

    bool isOpen(char ch){
        return ( ch == '(' || ch == '[' || ch =='{');
    }
    bool isPair(char first,char second){
        return (
            (first == '{' && second == '}') || 
            (first == '[' && second == ']') || 
            (first == '(' && second == ')')
            );
    }
};