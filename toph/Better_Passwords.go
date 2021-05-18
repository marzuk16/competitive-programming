package main

import "fmt"

func main(){

	var s string
	var a int
	
	fmt.Scan(&s)
	
	for i:=0; i<len(s); i++{
		if string(s[i]) == "s"{
			fmt.Print("$")
		}else if string(s[i]) == "i"{
			fmt.Print("!")
		}else if string(s[i]) == "o"{
			fmt.Print("()")
		}else {
			if i == 0{
				
				a = int(s[i])
				a -= 32 
				fmt.Print(string(a))
			}else{
				fmt.Print(string(s[i]))
			}
		}
	}
	fmt.Println(".")
}