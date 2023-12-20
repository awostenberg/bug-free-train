module Tests
// Michael here

/* 
    fizzbuzz in F#
    3 -> fizz
    5 -> buzz
    7 -> 7
    15 -> fizzbuzz


*/

not even syntatically valid why does this not fail to compile?


open System
open Xunit

[<Fact>]
let ``My 3-> fizz`` () =
    let result = fizzbuzz(3)
  
    Assert.True(result="fizz")

    // todo: refactor ot fluent assert:   assert result |> should be "fizz"
