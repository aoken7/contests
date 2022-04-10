package main

import "fmt"

func main() {
	var x int
	fmt.Scan(&x)

	var ans int

	if 0 <= x && x < 40 {
		ans = 40 - x
	} else if 40 <= x && x < 70 {
		ans = 70 - x
	} else if 70 <= x && x < 90 {
		ans = 90 - x
	} else {
		fmt.Println("expert")
		return
	}

	fmt.Println(ans)
}
