package main

import "fmt"

func main(){
	
	var a[4][4] int
	var b[4][4] int
	var c[4][4] int

/*	a := make([][]int, 4,4)
	b := make([][]int, 4,4)
	c := make([][]int, 4,4) */
	
	for i:=0; i<2; i++{
		for j:=0; j<2; j++{
			fmt.Scan(&a[i][j])
		}
	}
	for i:=0; i<2; i++{
		for j:=0; j<2; j++{
			fmt.Scan(&b[i][j])
		}
	}
	
	c[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0]
	c[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1]
	c[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0]
	c[1][1] = a[1][0]*b[0][1] + a[1][1]*b[1][1]
	
	for i:=0; i<2; i++{
		for j:=0; j<2; j++{
			fmt.Printf("%d ", c[i][j])
		}
		fmt.Printf("\n")
	}
}