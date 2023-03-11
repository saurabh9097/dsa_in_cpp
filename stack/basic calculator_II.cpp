#include<bits/stdc++.h>

class Solution {
public:
    bool isOperator(char c){
        return c == '+' || c == '-' || c == '*' || c == '/';
    }
        
    int calculate(string s) {
        
        int no = 0 ;
        char ps = '+';
        stack<int> stk ;
        
        for(int i = 0 ; i < s.length() ; i++){
            
            if(isdigit(s[i]))
                no = no*10 + (s[i] - '0');
            
            if(isOperator(s[i]) || i == s.length() -1){
                
                if(ps == '+'){
                    stk.push(no);
                }
                else if(ps == '-')
                    stk.push(-no);
                else if(ps == '*'){
                    int top = stk.top();
                    stk.pop();
                    stk.push(top * no);
                }
                else if(ps == '/'){
                    int top = stk.top();
                    stk.pop();
                    stk.push(top/no);
                }
                no = 0;
            ps = s[i];
            }
            
        }
        int res = 0;
        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }
        return res ;
    }
};



using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){

}
}