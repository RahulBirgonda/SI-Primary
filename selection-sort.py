Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-selection-sort
'''
Implement Selection Sort and print the index which gets swapped at each step.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines. First line of each test case contains N - size of the array. The next line contains N integers - elements of the array.

Constraints

1 <= T <= 100
2 <= N <= 100
-1000 <= ar[i] <= 1000


Output Format

For each test case, print the index which gets swapped at each step, separated by space. Separate the output of different tests by newline.

Sample Input 0

6
8
176 -272 -272 -45 269 -327 -945 176 
2
-274 161 
7
274 204 -161 481 -606 -767 -351 
2
154 -109 
4
5 3 1 5 
4
40 10 20 40 
Sample Output 0

4 0 4 3 1 2 1 
1 
3 0 1 2 2 1 
0 
0 0 1 
0 0 0 
'''
for _ in range(int(input())):
    n = int(input())
    l = list(map(int,input().split()))
    ans  = []
    for i in range(n,0,-1):
        ind = 0
        for j in range(0,i):
            if(l[j]>l[ind]):
                ind = j
        l[i-1],l[ind] = l[ind],l[i-1]
        ans.append(ind)
    print(*ans[0:n-1])
