package main

import "fmt"

var n int
var dp [10][1000000 + 1]int
var mod = 998244353

func dfs(num int, deep int) int {
	if deep == n {
		return 1
	}

	if num == 1 {
		if dp[num][deep] != 0 {
			return dp[num][deep]
		} else {
			dp[num][deep] = (dfs(num, deep+1) + dfs(num+1, deep+1)) % mod
			return dp[num][deep]
		}
	} else if num == 9 {
		if dp[num][deep] != 0 {
			return dp[num][deep]
		} else {
			dp[num][deep] = (dfs(num, deep+1) + dfs(num-1, deep+1)) % mod
			return dp[num][deep]
		}
	} else {
		if dp[num][deep] != 0 {
			return dp[num][deep]
		} else {
			dp[num][deep] = (dfs(num-1, deep+1) + dfs(num, deep+1) + dfs(num+1, deep+1)) % mod
			return dp[num][deep]
		}
	}
}

func main() {
	fmt.Scan(&n)

	ans := 0
	for i := 1; i < 10; i++ {
		ans = (ans + dfs(i, 1)) % mod
	}
	fmt.Println(ans)
}
