/*initially, the zoo have a single chick. A chick gives birth to 2 
chicks every day and the life expectancy of a chick is 6 days. Zoo officials want to buy food for chicks so they want to 
know the number of chicks on an Nth day. Help the officials with this task.*/

#include <bits/stdc++.h>

using namespace std;
#define ll long long int
 
// Function to return the number
// of chicks on the nth day

ll getChicks(int n)
{
 

    // Size of dp[] has to be

    // at least 6 (1-based indexing)

    int size = max(n, 7);

    ll dp[size];
 

    dp[0] = 0;

    dp[1] = 1;
 

    // Every day current population

    // will be three times of the previous day

    for (int i = 2; i <= 6; i++) {

        dp[i] = dp[i - 1] * 3;

    }
 

    // Manually calculated value

    dp[7] = 726;
 

    // From 8th day onwards

    for (int i = 8; i <= n; i++) {
 

        // Chick population decreases by 2/3 everyday.

        // For 8th day on [i-6] i.e 2nd day population

        // was 3 and so 2 new born die on the 6th day

        // and so on for the upcoming days

        dp[i] = (dp[i - 1] - (2 * dp[i - 6] / 3)) * 3;

    }
 

    return dp[n];
}
 
// Driver code

int main()
{

    int n;
    cin>>n;
 

    cout << getChicks(n);
 

    return 0;
}