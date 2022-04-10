package main

import (
	"fmt"
)

func main() {
	var s, t string
	fmt.Scan(&s, &t)

	var cnt = 0
	var bad = 0

	for i := 0; i < len(s); i++ {
		if s[i] != t[i] {
			if i < len(s)-1 && s[i] == t[i+1] && s[i+1] == t[i] {
				cnt++
				i++
			} else {
				bad++
			}
		}
	}

	if cnt < 2 && bad < 1 {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
