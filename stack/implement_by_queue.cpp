#include<bits/stdc++.h>
using namespace std;
template<class t>
class stackByQueue{
    public:
        queue<t> queue1;
        queue<t> queue2;

        void push(t data){
            while(!queue1.empty()){
                queue2.push(queue1.front());
                queue1.pop();
            }
            queue1.push(data);
            while(!queue2.empty()){
                queue1.push(queue2.front());
                queue2.pop();
            }
        }
        t pop(){
            t res=queue1.front();
            queue1.pop();
            return res;
        }

};
int main(){
    stackByQueue<int>s;
    s.push(1);
    s.push(2);
    cout<<s.pop();
}