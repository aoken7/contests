package main

import (
	"fmt"
	"math"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	fmt.Println(int(math.Pow(32, float64(a-b))))
}
