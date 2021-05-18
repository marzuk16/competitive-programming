package main

import "fmt"

func main(){
	
	var a, b, x, y int 
	
	z := false 
	
	fmt.Scanf("%d %d", &a, &b)
		
	for a>0 && b>0{
	
		x = a%10
		y = b%10
		
		if x+y > 9{
			z = true
			break
		}
		
		a /= 10
		b /= 10
	}
	
	if z{
		fmt.Println("Yes")
	}else{
		fmt.Println("No")
	}
}