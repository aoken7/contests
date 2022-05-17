package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	mp := map[string]int{}
	for i := 0; i < n; i++ {
		var s string
		fmt.Scan(&s)
		if _, ok := mp[s]; ok {
			mp[s]++
		} else {
			mp[s] = 1
		}
	}

	name := ""
	cnt := 0

	for v := range mp {
		if mp[v] > cnt {
			name = v
			cnt = mp[v]
		}
	}

	fmt.Println(name)
}
