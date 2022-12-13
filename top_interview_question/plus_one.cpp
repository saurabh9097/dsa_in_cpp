#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        if(digits[digits.size()-1]+carry+1<=9){
                digits[digits.size()-1]=digits[digits.size()-1]+1;
            return digits;
            }
        else{
            carry=1;
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]+carry>9){
                digits[i]=0;
                carry=1;
            }
            else{
                digits[i]=digits[i]+carry;
                carry=0;
                break;
            }
            
        }
            if(carry==1){
                digits.insert(digits.begin(),1);
            }
        }
        return digits;
    }
};


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){

}
}