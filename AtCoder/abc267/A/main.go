package main

import "fmt"

func main() {
	var s string
	fmt.Scan(&s)

	week := []string{"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"}
	for i, w := range week {
		if w == s {
			fmt.Println(5 - i)
			return
		}
	}
}
