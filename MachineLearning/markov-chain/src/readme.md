# C++ Markov-chain

This is my Markov-chain program. I split into 2 versions where one uses characters and the other uses words.

## CharMarkov

How it works:

1. Counts each specific letter.
2. Pushes the amount of letters into a vector.
3. Pulls a random letter from the vector (or you pick out the character).
4. Moves the iterator + 1.
5. Pushes the character into a new vector.
6. Pulls a random letter from the new vector.

Example:

abac

If you choose the character "a".

There is a 50% chance the next letter will be "b" and 50% chance the next letter will be "c".

0% chance will be "a" or "d" etc etc.

## WordMarkov

How it works:

1. Splits up a string into array.
2. Randomly pull a word from the array.
3. Goes through the string and finds all of the words that got picked out from the array.
4. Moves the iterator + 1 so you pick the next word.
5. Pushes the word into a vector
6. After it finsihes, randomly chooses a word ( Or you choose one) and predicts what will be the next word.

Example:

This camera is cool. This picture looks great too.

If you choose the word "This".

There will be a 50% chance the next wrod will be camera and 50% chance will be "picture".


## License

Some MIT license.
