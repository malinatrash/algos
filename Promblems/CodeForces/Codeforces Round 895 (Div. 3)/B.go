package main

import (
	"fmt"
	"strings"
)

func main() {
	var t int32
	fmt.Scanln(&t)

	for t > 0 {
		var n int32
		fmt.Scanln(&n)
		for n > 0 {
			var ds string
			fmt.Scanln(&ds)
			a,b := strings.Split(ds, " ")
			n--
		}
		t--
	}	
}