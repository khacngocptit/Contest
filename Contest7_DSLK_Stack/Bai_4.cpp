#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        stack<char> stk;
        cin >> s;
        bool ok = true;
        for(int i=0;i<s.size();i++){
            if(s[i] == '['|| s[i] == '(' || s[i]=='{') {
                stk.push(s[i]);
            }
            else if(s[i] == ')'){
                if(stk.size() == 0) {
                    ok = false;
                    break;
                }
                else if(stk.top() == '('){
                    stk.pop();
                }
            }
            else if(s[i] == ']'){
                if(stk.size() == 0) {
                    ok = false;
                    break;
                }
                else if(stk.top() == '['){
                    stk.pop();
                }
            }
            else if(s[i] == '}'){
                if(stk.size() == 0) {
                    ok = false;
                    break;
                }
                else if(stk.top() == '{'){
                    stk.pop();
                }
            }
        }
        if(stk.size() > 0) ok = false;
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
