package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	var n, x int
	fmt.Fscan(in, &n, &x)

	if n > x {
		fmt.Println("A")
		return
	}

	a := math.Ceil(float64(x) / float64(n))
	fmt.Println(string(rune('A' + a - 1)))
}
