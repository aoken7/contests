package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	r := bufio.NewReader(os.Stdin)
	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()

	var n, q int
	fmt.Fscan(r, &n, &q)

	x := make([]int, q)
	for i := 0; i < q; i++ {
		fmt.Fscan(r, &x[i])
		x[i] = x[i] - 1
	}

	elemToIdx := map[int]int{}
	idxToElem := map[int]int{}

	for i := 0; i < n; i++ {
		elemToIdx[i] = i
		idxToElem[i] = i
	}

	for i := 0; i < q; i++ {
		idx1 := elemToIdx[x[i]]
		var elm2 int
		if idx1 == n-1 {
			elm2 = idxToElem[idx1-1]
		} else {
			elm2 = idxToElem[(idx1 + 1)]
		}
		idx2 := elemToIdx[elm2]
		elemToIdx[x[i]] = idx2
		elemToIdx[elm2] = idx1
		idxToElem[idx2] = x[i]
		idxToElem[idx1] = elm2

	}

	for i := 0; i < n; i++ {
		fmt.Fprint(w, idxToElem[i]+1)
		fmt.Fprint(w, " ")
	}
	fmt.Fprintf(w, "\n")
}
