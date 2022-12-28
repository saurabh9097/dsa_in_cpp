#include <iostream>
#include<string>
using namespace std;
void subsequence(string str,int i=0,string curr=""){
    if(i==str.size()){
        cout<<curr<<endl;
        return;
    }
    subsequence(str,i+1,curr+str[i]);
    subsequence(str,i+1,curr);    
}
int main() {
	subsequence("dk");
	return 0;
}