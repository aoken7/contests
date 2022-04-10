package main

import "fmt"

func main() {
	var cnt = 1
	for i := 1; i < int(1e8); i++ {
		cnt += i
	}
	fmt.Println(cnt)
}
