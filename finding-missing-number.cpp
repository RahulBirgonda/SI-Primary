Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-finding-missing-number
/*
Given an array of size N, it contains all the numbers from 1 to N+1 inclusive, except one number. You have to find the missing number.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, first line of each test case contains N - size of the array and the next line contains N integers - the elements of the array.

Constraints

1 <= T <= 500
1 <= N <= 10000
1 <= ar[i] <= N+1

Output Format

For each test case, print the missing number, separated by newline.

Sample Input 0

3
8
1 2 7 9 5 6 3 8 
7
3 5 8 1 4 7 2 
10
8 11 10 2 7 4 3 5 1 6 
Sample Output 0

4
6
9
Explanation 0

Test Case 1:
Array Size=8: It should have all the elements between [1,9] exactly once, except one of them. Hence 4 is the missing element.

Test Case 2:
Array Size=7: It should have all the elements between [1,8] exactly once, except one of them. Hence 6 is the missing element.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=1;
        for(int i=2;i<=n+1;i++)   ans=ans^i;
        for(int i=0;i<n;i++)    ans=ans^a[i];
        cout<<ans<<endl;
        
        
    }
    return 0;
}