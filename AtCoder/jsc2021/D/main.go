//解説AC
package main

import "fmt"

var n, p int
var mod = 1000000000 + 7

func pow(x int, n int) int {
	ret := 1
	for n > 0 {
		if n&1 == 1 {
			ret = ret * x % mod
		}
		x = x * x % mod
		n >>= 1
	}
	return ret
}

func main() {
	fmt.Scan(&n, &p)

	ans := (p - 1) * pow(p-2, n-1) % mod

	fmt.Println(ans)
}
