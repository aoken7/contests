package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	var n int
	fmt.Fscan(in, &n)

	t := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Fscan(in, &t[i])
	}

	s := 0
	for _, tt := range t {
		s += tt
	}

	dp := make([][2]int, n*1000)
	for i := 0; i < n; i++ {
		dp[i][1] = 1
	}

}
