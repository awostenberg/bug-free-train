module Tests

// Michael here

(*
    fizzbuzz in F#
    3 -> fizz
    5 -> buzz
    7 -> 7
    15 -> fizzbuzz


*) 


open System
open Xunit

let add a b = a + b
let inc n = add 1


let fizzbuzz n =
    let divisibleBy m = n % m = 0

    match divisibleBy 3, divisibleBy 5 with
        | true, false ->  "fizz"
        | false, true -> "buzz"
        | false, false -> string n
        | true, true -> "fizzbuzz"


[<Fact>]
let ``3 -> fizz`` () = assert (fizzbuzz 3 = "fizz")

[<Fact>]
let ``5 -> buzz`` () = assert (fizzbuzz 5 = "buzz")


[<Fact>]
let ``7 -> 7`` () = assert (fizzbuzz 7 = "7")

[<Fact>]
let ``15 -> fizzbuzz`` () = assert (fizzbuzz 15 = "fizzbuzz")

    // todo: refactor ot fluent assert:   assert result |> should be "fizz"
[<Fact>]
let ``1 -> 1`` () = assert (fizzbuzz 1 = "1")
