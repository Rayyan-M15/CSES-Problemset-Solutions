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
    cin >> n;

    if (n == 1)
    {
        cout<< 1 << endl;
    }else if (n<=3)
    {
        cout<< "NO SOLUTION";
    }else{
        for (int  i = 2; i <= n; i += 2)
        {
            cout<< i << " ";
        }

        for (int i = 1; i <= n; i += 2)
        {
            cout<< i << " ";
        }cout<<endl;
        
    }
    return 0;
}