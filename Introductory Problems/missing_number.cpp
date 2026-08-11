#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <numeric>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // long long int n;
    // cin>>n;

    // vector<int> arr(n);

    // for (int i = 0; i < n; i++)
    // {
    //     int a;
    //     cin>>a;
    //     arr[i] = a;
    // }

    // sort(arr.begin(), arr.end());

    // int st = arr[0];
    // int end = arr[n-1];
    // int ans = 0;
    // while (n--)
    // {
    //     int mid = st + (end-st)/2;

    //     if (abs(arr[mid]-arr[mid+1]) == 2 )
    //     {
    //         ans = (arr[mid]-arr[mid+1])/2;
    //     }
         
    // }
    // cout<<ans;

    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;

    long long actual_sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        int x;
        cin >> x;
        actual_sum += x;
    }

    cout << sum - actual_sum << endl;
    
    return 0;
}