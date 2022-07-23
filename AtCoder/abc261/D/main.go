package main

import (
	"bufio"
	"fmt"
	"os"
)

func max(x int, y int) int {
	if x >= y {
		return x
	} else {
		return y
	}
}

func main() {
	r := bufio.NewReader(os.Stdin)
	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()

	var n, m int
	fmt.Fscan(r, &n, &m)
	x := make([]int, n+1)
	for i := 0; i < n; i++ {
		fmt.Fscan(r, &x[i+1])
	}

	b := make([]int, n+1)

	for i := 0; i < m; i++ {
		var c, y int
		fmt.Fscan(r, &c, &y)
		b[c] = y
	}

	dp := make([][]int, n+1)
	for i := 0; i < len(dp); i++ {
		tmp := make([]int, n+1)
		dp[i] = tmp
	}

	for i := 1; i <= n; i++ {
		for j := 1; j <= i; j++ {
			dp[i][j] = dp[i-1][j-1] + x[i] + b[j]
		}

		dp[i][0] = 0
		for j := 0; j < i; j++ {
			dp[i][0] = max(dp[i][0], dp[i-1][j])
		}
	}

	ans := 0
	for i := 0; i <= n; i++ {
		ans = max(ans, dp[n][i])
	}

	fmt.Fprintln(w, ans)
}
