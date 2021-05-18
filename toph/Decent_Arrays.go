package main

import "fmt"

func main(){
	var n, x int
	flag := true
	comp := -1
	
	fmt.Scanf("%d", &n)
	
	for i:=1; i<=n; i++{
		fmt.Scanf("%d", &x)
		
		if comp > x{
			flag = false
		}else{
			comp = x
		}
	}
	
	if flag{
		fmt.Println("Yes")
	}else{
		fmt.Println("No")
	}
}