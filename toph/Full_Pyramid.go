package main

import "fmt"

func main(){

	var n int
	
	fmt.Scanf("%d", &n)
	
	for i := 1; i<=n; i++{
		
		for s := 1; s<=(n-i-1); s++{
				fmt.Print(" ")
			}
		for j := 1; j<=i; j++ {
			if i == n && j == 1{
				fmt.Print("*")
			}else{
				fmt.Print(" *")
			}
		}
		fmt.Println()
	}
}