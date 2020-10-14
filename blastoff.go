package main

import "fmt"

func main() {

        const countdown int = 10
        var count int = countdown

        for count >= 0 {

                fmt.Println(count)
                count -= 1
        }
        fmt.Println("BLAST OFF")
}
