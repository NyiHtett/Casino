# Casino
Write a program that simulates shuffling and dealing of a deck of cards, which are (value, face), where value is A, 2-10, J, Q, K, and face is S(spade), H(heart), C(club), and D(diamond), for example, AH, 3H, JC, and 4D.

Input: if "deal" is entered, then print out a random card and wait for the next input. If "quit" is entered, then exit; otherwise, ask for a valid command. 

output:

1) print out a random card, when "deal" is entered

2) When "quit" is entered, exit.

Notes:

For now, it is ok to produce the same card in fewer than 52 consecutive deals. After we learn about arrays, we will require different cards to be given for 52 tries.

Rubrics: 

1) Different runs should produce different cards, i.e., the first card in run 1 should be different from the first card in run 2. (2 pts)

2) Produce different valid cards in 10 consecutive deals (13 pts)

3) Deal different cards in all 52 consecutive tries (extra 5 pts)
