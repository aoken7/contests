package main

import "fmt"

func main() {
	var x string
	var n int
	fmt.Scan(&x, &n)

	mp := map[rune]rune{}

	for i,y := range x {
		mp[rune('a'+i)] = 
	}

	return

	s := []string{}
	for i := 0; i < n; i++ {
		var t string
		fmt.Scan(&t)
		s = append(s, t)
	}

	fmt.Println(s[0])
}
