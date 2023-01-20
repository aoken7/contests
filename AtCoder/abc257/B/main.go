package main

import (
	"bufio"
	"fmt"
	"os"
)

func input() (int, int, int, []int, []int) {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	var n, k, q int
	fmt.Fscan(in, &n, &k, &q)
	a := make([]int, k)
	for i := 0; i < k; i++ {
		fmt.Fscan(in, &a[i])
	}
	l := make([]int, q)
	for i := 0; i < q; i++ {
		fmt.Fscan(in, &l[i])
		l[i]--
	}

	return n, k, q, a, l
}

func main() {
	n, k, _, a, l := input()

	// 番兵
	a = append(a, n+1)

	for _, idx := range l {
		// a[idx]がa[idx+1]より2以上小さければインクリメント
		if a[idx] < a[idx+1]-1 {
			a[idx]++
		}
	}

	for i := 0; i < k; i++ {
		fmt.Print(a[i], " ")
	}
	fmt.Println()
}
