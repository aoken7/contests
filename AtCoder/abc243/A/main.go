package main

import "fmt"

func main() {
	var v, a, b, c int

	fmt.Scan(&v, &a, &b, &c)

	if v >= a+b+c {
		v %= a + b + c
	}

	if v < a {
		fmt.Println("F")
	} else if v < a+b {
		fmt.Println("M")
	} else {
		fmt.Println("T")
	}

}
