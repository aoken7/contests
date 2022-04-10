package main

import (
	"fmt"
	"math"
)

func toDecimal(k, x int) int {
	var ans int
	for i := 0; x > 0; i++ {
		digit := x % 10
		x /= 10
		ans += digit * int(math.Pow(float64(k), float64(i)))
	}
	return ans
}

func main() {
	var k int
	var a, b int
	fmt.Scan(&k, &a, &b)

	a10, b10 := toDecimal(k, a), toDecimal(k, b)

	ans := a10 * b10
	fmt.Println(ans)
}
