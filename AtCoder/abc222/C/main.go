package main

import (
	"fmt"
	"sort"
)

type T struct {
	ranks int
	index int
	cnt   int
}

//0:a 1:b
func win_check(a, b rune) int {
	switch {
	case a == b:
		return -1
	case a == 'G' && b == 'C', a == 'C' && b == 'P', a == 'P' && b == 'G':
		return 0
	case a == 'G' && b == 'P', a == 'C' && b == 'G', a == 'P' && b == 'C':
		return 1
	default:
		return -1
	}
}

func main() {
	var n, m int
	fmt.Scan(&n, &m)
	a := make([]string, n*2)
	for i := 0; i < 2*n; i++ {
		var tmp string
		fmt.Scan(&tmp)
		a[i] = tmp
	}

	var ranking = make([]T, 2*n)

	for i := 0; i < 2*n; i++ {
		ranking[i].index = i
		ranking[i].ranks = i
	}

	for j := 0; j < m; j++ {
		for i := 0; i < n; i++ {
			x := win_check(rune(a[ranking[2*i].index][j]), rune(a[ranking[2*i+1].index][j]))
			if x == 0 {
				ranking[2*i].cnt++
			} else if x == 1 {
				ranking[2*i+1].cnt++
			}
		}
		sort.Slice(ranking, func(i, j2 int) bool {
			if ranking[i].cnt == ranking[j2].cnt {
				return ranking[i].index < ranking[j2].index
			} else {
				return ranking[i].cnt > ranking[j2].cnt
			}
		})
	}

	for _, item := range ranking {
		fmt.Println(item.index + 1)
	}
}
