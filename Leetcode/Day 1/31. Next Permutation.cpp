31. Next Permutation
brute force
1. generate all possible combination
2. linear iterate

optimized approach
// * 1 3 5 4 2 -> 1 4 2 3 5
1. traverse from back
2. find a[i] < a[i+1] -> index 1 if found so break
3. again traverse from back
4. value which is greater than index 1 a[i] > a[index1] index 2
5. swap(a[index 1] , index[2])
6. reverse it from reverse(index+1, last)