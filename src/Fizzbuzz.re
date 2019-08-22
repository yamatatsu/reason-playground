let rec range = (num: int): array(int) =>
  switch (num) {
  | 1 => [|0|]
  | _ => Array.append(range(num - 1), [|num - 1|])
  };
let fizzbuzz = (num: int) =>
  switch (num mod 3 === 0, num mod 5 === 0) {
  | (true, true) => "fizzbuzz"
  | (true, false) => "fizz"
  | (false, true) => "buzz"
  | (false, false) => string_of_int(num)
  };

range(16) |> Array.map(fizzbuzz) |> Js.log;
