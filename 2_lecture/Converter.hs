module Converter where

data Bit = Z | O deriving (Show, Eq)

b2u :: [Bit] -> Int
b2u = fst . binAccum

b2t :: [Bit] -> Int
b2t (x:xs) =
  if x == O
  then val - 2^acc
  else val
    where
      (val,acc) = binAccum xs

binAccum :: [Bit] -> (Int,Int)
binAccum = foldr f (0,0)
  where
    f bit (val, acc) =
      if bit == O
      then (val + 2^acc, acc + 1)
      else (val, acc + 1)
