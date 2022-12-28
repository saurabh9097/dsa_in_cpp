#include<bits/stdc++.h>
using namespace std;
void subArraysumi(vector<int>&a,int sumi){
    unordered_map<int,int> hashmap;
    int currentsumi = 0;
    int start = 0;
    int end=-1;
    for (int i = 0; i < a.size(); i++)
    {
        currentsumi +=a[i];
        if (currentsumi-sumi==0)
        {
            start = 0;
            end = i;
            break;
        }
        if(hashmap.find(currentsumi-sumi) != hashmap.end()){
            start = hashmap[currentsumi-sumi]+1;
            end=i;
            break;
        }
        hashmap[currentsumi]=i;
    }
    if (end==-1)
    {
        cout<<"Not Found!"<<endl;
    }
    else{
        cout<<start<<" "<<end<<endl;
    }   
}
int main(){ 
    vector<int> a={10,15,-5,15,-10,5};
    int sumi=5;
    subArraysumi(a,sumi);
    int * ptr= new int[5];
    delete[] ptr;
}