package main

import (
	"fmt"
	"sort"
)

func main() {
	var s string
	fmt.Scan(&s)

	t := s + s

	mp := make([]string, 0)

	for i := 0; i < len(t)-len(s); i++ {
		tmp := t[i : i+len(s)]
		mp = append(mp, tmp)
	}

	sort.Slice(mp, func(i, j int) bool {
		return mp[i] < mp[j]
	})

	fmt.Println(mp[0])
	fmt.Println(mp[len(mp)-1])
}
