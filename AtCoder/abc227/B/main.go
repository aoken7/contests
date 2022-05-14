package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	s := make([]int, n, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&s[i])
	}

	var pos = 0

	for _, v := range s {
		for a := 1; a < 400; a++ {
			for b := 1; b < 400; b++ {
				if 4*a*b+3*a+3*b == v {
					pos++
					a += 1000
					b += 1000
					break
				}
			}
		}
	}

	fmt.Println(n - pos)
}
