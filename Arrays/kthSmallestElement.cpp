#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>k;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(a[i])  ;
    }
    int f = k - 1 ;
    while (f > 0) {
        pq.pop()  ;
        f-- ;
    }
    cout << "Kth Largest element " << pq.top() << "\n"  ;
    priority_queue <int, vector<int>, greater<int> >  q;
    for (int i = 0; i < n; i++)
    {
        q.push(a[i])  ;
    }
    int g = k - 1 ;
    while (g > 0) {
        q.pop()  ;
        g-- ;
    }
    cout << "Kth smallest element " << q.top() << "\n"  ;
    return 0;
}