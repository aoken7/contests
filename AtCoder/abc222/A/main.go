package main

import "fmt"

func main() {
	var n string
	fmt.Scan(&n)

	for len(n) < 4 {
		n = "0" + n
	}

	fmt.Println(n)
}
