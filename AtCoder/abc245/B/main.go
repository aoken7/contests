package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	a := map[int]int{}
	for i := 0; i < n; i++ {
		var tmp int
		fmt.Scan(&tmp)
		a[tmp]++
	}

	for i := 0; i < 2001; i++ {
		if _, ok := a[i]; !ok {
			fmt.Println(i)
			return
		}
	}
}
