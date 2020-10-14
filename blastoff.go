package main

import "fmt"

func main() {

        const blastoff = 10

        for i := blastoff; i >= 0; i-- {
                fmt.Printf("%d\n", i)
                if i == 0 {
                        fmt.Printf("BLAST OFF.\n")
                }
        } 
}
