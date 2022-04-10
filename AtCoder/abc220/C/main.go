package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	a := make([]int, n, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}
	var x int
	fmt.Scan(&x)

	var sum int
	for _, i := range a {
		sum += i
	}

	var cnt = x / sum * sum
	var ans = x / sum * n

	for _, item := range a {
		cnt += item
		ans += 1
		if cnt > x {
			break
		}
	}
	fmt.Println(ans)
}
