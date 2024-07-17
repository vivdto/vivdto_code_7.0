#include "iostream"
using namespace std;

int main(){
    int n, d; 
    cin>>n>>d;
    int x = (n%7);
    int ans = (d - x); 
    if(ans>0){
        cout<<n<<" "<<ans;
    }
    else{
        ans = (ans + 7);
    cout<<n<<" "<<ans;
    }
    return 0;
}

/*

Test Case 1: n divisible by 7 (n % 7 == 0)

Input: n = 14, d = 5
Output: 14 5
Explanation: Since n % 7 == 0, x = 0. Therefore, ans = d - x = 5, which is greater than 0.
Test Case 2: n not divisible by 7 (n % 7 != 0) and d > n % 7

Input: n = 19, d = 8
Output: 19 7
Explanation: Here, n % 7 = 5. So, x = 5. Therefore, ans = d - x = 8 - 5 = 3, which is greater than 0. But since ans <= 0, we adjust by adding 7 to ans, giving ans = 3 + 7 = 7.
Test Case 3: n not divisible by 7 (n % 7 != 0) and d <= n % 7

Input: n = 21, d = 4
Output: 21 11
Explanation: Here, n % 7 = 0. So, x = 0. Therefore, ans = d - x = 4 - 0 = 4, which is greater than 0.
Test Case 4: Edge case with large values

Input: n = 100, d = 95
Output: 100 93
Explanation: Here, n % 7 = 2. So, x = 2. Therefore, ans = d - x = 95 - 2 = 93, which is greater than 0.

*/