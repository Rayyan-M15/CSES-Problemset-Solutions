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
    int n;
    cin>>n;
    long long moves =0;


    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int  i = 1; i < n; i++)
    {
        if(arr[i-1] > arr[i]){
            moves += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout<<moves<<endl;
    
    return 0;
}