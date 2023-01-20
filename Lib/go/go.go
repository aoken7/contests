// <lib>
// <prefix> go
package main

import (
	"bufio"
	"fmt"
	"os"
)

func input() int {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	var n int
	fmt.Fscan(in, &n)
	return n
}

func main() {
	n := input()
}

//<lib/>
