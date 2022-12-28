#include<bits/stdc++.h>
#include <chrono>  
using namespace std;
int main()
{
    chrono::hours h=2h;
    chrono::minutes m=3min;
    chrono::milliseconds mi=400ms;
    cout<<(h-m+mi).count()/60<<" "<<(h-m+mi).count()%60;
    cout<<endl;
    std::chrono::time_point<std::chrono::system_clock> start, end;
    end = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << "finished computation at " << std::ctime(&end_time);
  
}