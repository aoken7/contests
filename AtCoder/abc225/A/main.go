package main

import "fmt"

func main() {
	var s string
	fmt.Scan(&s)
	mp := map[rune]int{}

	for item := range s {
		mp[rune(item)]++
	}

	ans := 1
	for i := 1; i < len(mp)+1; i++ {
		ans *= i
	}

	fmt.Println(ans)
}
