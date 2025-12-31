// how to handel PAIR in priority queue

#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int , int> , vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({10,1});
    pq.push({5,2});
    // Priority queue always check first value 
    // (10,1) and (5,2) answer is (5,2)
    // because 5 is less than 10
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(5);
    cout << pq.top() << endl;
}
*/