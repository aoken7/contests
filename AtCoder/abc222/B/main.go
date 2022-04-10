package main

import "fmt"

func main() {
	var n, p int
	fmt.Scan(&n, &p)
	a := make([]int, n)
	for i := 0; i < n; i++ {
		var tmp int
		fmt.Scan(&tmp)
		a[i] = tmp
	}

	var ans int

	for _, item := range a {
		if item < p {
			ans++
		}
	}
	fmt.Println(ans)
}
