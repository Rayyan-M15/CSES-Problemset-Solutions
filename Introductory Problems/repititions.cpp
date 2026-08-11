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
    string str;
    cin>>str;
    vector<int> ans;

    int rep =1;
    int n = str.size();
    int maxi = 1;
    for (int i = 1; i < n; i++)
    {
        if (str[i-1] == str[i])
        {
            rep++;
        }else{
            ans.push_back(rep);
            rep =1;
        }
        maxi = max(maxi, rep);
        
    }

    cout<<maxi<<endl;
    
    return 0;
}