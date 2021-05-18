package main

import "fmt"

func main(){

	var s string
	fmt.Scan(&s)
	
	if(len(s)%2 != 0){
		fmt.Println("No")
	}else{
		cnt := 0
		
		for i:=0; i<len(s); i++{
			if s[i] == '('{
				cnt ++
			}else if s[i] == ')'{
				cnt--
			}
			if( cnt < 0){
				cnt = 1
				break
			}
		}
		if cnt == 0{
			fmt.Println("Yes")
		}else{
			fmt.Println("No")
		}
	}
	
}