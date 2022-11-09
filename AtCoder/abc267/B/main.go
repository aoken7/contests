package main

import "fmt"

func countLine(s string) []int {
	line := make([]int, 7)
	cnt := 0
	for i := 0; i < 4; i++ {
		for j := 0; j <= i; j++ {
			idx := 3 - i + 2*j
			if s[cnt] == '1' {
				line[idx]++
			}
			cnt++
		}
	}
	return line
}

func oneCheck(s string) bool {
	if s[0] == '1' {
		return false
	}
	return true
}

func splitCheck(l []int) bool {
	for i := 1; i < 6; i++ {
		if l[i-1] > 0 && l[i] == 0 && l[i+1] > 0 {
			return true
		}
	}
	return false
}

func main() {
	var s string
	fmt.Scan(&s)
	line := countLine(s)

	if oneCheck(s) && splitCheck(line) {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
