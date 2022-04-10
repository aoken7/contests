package main

import "fmt"

func main() {
	p := [26]int{}
	for i := 0; i < len(p); i++ {
		fmt.Scan(&p[i])
	}

	for i := 0; i < len(p); i++ {
		fmt.Printf("%c", rune('a'+p[i]-1))
	}
}
