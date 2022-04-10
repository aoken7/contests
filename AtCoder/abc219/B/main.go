package main

import "fmt"

func main() {
	var s1, s2, s3 string
	var t string

	fmt.Scan(&s1, &s2, &s3)
	fmt.Scan(&t)

	var ans = ""

	for _, c := range t {
		if c == '1' {
			ans += s1
		} else if c == '2' {
			ans += s2
		} else if c == '3' {
			ans += s3
		}
	}

	fmt.Println(ans)
}
