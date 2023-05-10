#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     
    int n, q;
    
    cin >> n >> q;
    
    /* create a vector of vectors to store the variable-length arrays*/
    
    vector<vector<int>> a(n);
    
    // read in the variable-length arrays
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        a[i].resize(k);
        for(int j = 0; j < k; j++){
            cin >> a[i][j];
        }
        
    }
    // process the queries
    for(int i = 0; i < q; i++){
        int x,y;
        cin >> x >> y;
        cout << a[x][y] << endl;
    }
    
      
    return 0;
}

/*
Consider an -element array, , where each index  in the array contains a reference to an array of  integers (where the value of  varies from array to array). See the Explanation section below for a diagram.

Given , you must answer  queries. Each query is in the format i j, where  denotes an index in array  and  denotes an index in the array located at . For each query, find and print the value of element  in the array at location  on a new line.
.

Input Format:
The first line contains two space-separated integers denoting the respective values of n (the number of variable-length arrays) and q (the number of queries).
Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i] .
Each of the q subsequent lines contains two space-separated integers describing the respective values of i (an index in array a ) and  (an index in the array referenced by a[i] ) for a query.

Constraints:
All indices in this challenge are zero-based.
All the given numbers are non negative and are not greater than 

Output Format:
For each pair of i and j values (i.e., for each query), print a single integer that denotes the element located at index j of the array referenced by a[i] . There should be a total of q lines of output.

Sample Input:
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

Sample Output:
5
9

*/