#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Objective
Today we're expanding our knowledge of Strings and combining it with what we've already learned about loops.
Check out the Tutorial tab for learning materials and an instructional video!

Task
Given a string, S, of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters
as 2 space-separated strings on a single line (see the Sample below for more detail).

Note: 0 is considered to be an even index.

Input Format

The first line contains an integer, T (the number of test cases).
Each line i of the T subsequent lines contain a String, S.

Constraints

Output Format

1 <= T <= 100
2 <= length of S <= 10000

For each String Sj (where 0 <= j <= T-1), print Sj's even-indexed characters, followed by a space, followed by Sj's
odd-indexed characters.

Sample Input
2
Hacker
Rank

Sample Output
Hce akr
Rn ak
*/
int main() {
   string str;
    int T;
    cin >> T;
    while(T){
      cin >> str;
      for(int i=0;i<str.length();i+=2){
        cout<<str[i];
      }
      
      cout<<" ";
      for(int j=1;j<str.length();j+=2){
        cout<<str[j];
    }