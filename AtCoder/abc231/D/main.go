package main

import (
	"fmt"
)

type c struct {
	a int
	b int
}

type node struct {
	left  int
	right int
	root  int
}

func isConnectRight(x int, tree []node) bool {
	return tree[x].right != 0
}

func isConnectLeft(x int, tree []node) bool {
	return tree[x].left != 0
}

func max(x, y int) int {
	if x >= y {
		return x
	} else {
		return y
	}
}

func main() {
	var n, m int
	fmt.Scan(&n, &m)
	ab := make([]c, m, m)
	for i := 0; i < m; i++ {
		var a, b int
		fmt.Scan(&a, &b)
		ab[i] = c{a - 1, b - 1}
	}

	tree := make([]node, n, n)

	for _, v := range ab {
		if isConnectRight(v.a, tree) || isConnectLeft(v.b, tree) {
			println("No")
			return
		}

		if tree[v.a].root == 0 && tree[v.b].root == 0 {
			tree[v.a].root = max(v.a, v.b)
		} else if tree[v.a].root == tree[v.b].root {
			fmt.Println("No")
			return
		}

		tree[v.a].right = v.b
		tree[v.b].left = v.a

	}
	fmt.Println("Yes")
}
