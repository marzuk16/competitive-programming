package main

import "fmt"

func main(){

	var y int
	
	fmt.Scan(&y)
	
	if y%4 == 0{
		if y%100 == 0{
			if y%400 == 0{
				fmt.Println("Yes")
			}else{
				fmt.Println("No")
			}
		}else{
			fmt.Println("Yes")
		}
	}else{
		fmt.Println("No")
	}
}