package main

import (
	"fmt"
)

func main() {
	var n int
	var s string
	fmt.Scan(&n, &s)

	for i, x := range s {
		if i == n-1 {
			if x == 'o' {
				fmt.Println("Yes")
			} else {
				fmt.Println("No")
			}
			break
		}
	}

}
