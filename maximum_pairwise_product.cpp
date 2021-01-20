#include <bits/stdc++.h>
using namespace std;

long long maxPairWisePro(vector<int> arr)
{
    int max1 = -1, max2 = -1, sz = arr.size();
    long long pro = 0;
    for(int i = 0; i < sz; i++)
    {
        if(arr[i] >= max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
    }
    pro = max1 * max2;
    return pro;
}

int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>n;
        arr.push_back(n);
    }
    cout<<maxPairWisePro(arr)<<endl;
}
