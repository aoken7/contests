package main

import (
	"fmt"
	"sort"
)

func main() {
	var n, q int
	fmt.Scan(&n, &q)
	a := make([]int, n, n)
	for i := 0; i < n; i++ {
		var tmp int
		fmt.Scan(&tmp)
		a[i] = tmp
	}

	sort.Ints(a)

	l := len(a)

	for i := 0; i < q; i++ {
		var x int
		fmt.Scan(&x)
		idx := sort.Search(l, func(j int) bool { return a[j] >= x })

		fmt.Println(l - idx)
	}
}
