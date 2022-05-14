package main

import "fmt"

func main() {
	var n, k, a int
	fmt.Scan(&n, &k, &a)

	idx := make([]int, n*2)

	for i, _ := range idx {
		idx[i] = (i + 1) % n
	}

	fmt.Println(idx[a%n+n])
}
