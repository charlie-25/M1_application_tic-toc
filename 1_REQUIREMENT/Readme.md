# REQUIREMENTS

## Introduction

The tic-tac-toe game is played on a 3x3 grid the game is played by two players, who take turns. The first player marks moves with a circle, the second with a cross. The player who has formed a horizontal, vertical, or diag-onal sequence of three marks wins.

## Features
- Simple interface

- Nice graphics

- Funny sound effects

- Easy to alter the graphics and sounds

## Research

### Tic-tac-toe Game Features and Benefits

It is often used as a pedagogical tool for teaching the concepts of good sportsmanship and the branch of artificial intelligence that deals with the searching of game trees. It is straightforward to write a computer program to play tic-tac-toe perfectly or to enumerate the 765 essentially different positions (the state space complexity) or the 26,830 possible games up to rotations and reflections (the game tree complexity) on this space. If played optimally by both players, the game always ends in a draw, making tic-tac-toe a futile game.

The game can be generalized to an m,n,k-game in which two players alternate placing stones of their own color on an m×n board, with the goal of getting k of their own color in a row. Tic-tac-toe is the (3,3,3)-game.Harary's generalized tic-tac-toe is an even broader generalization of tic-tac-toe. It can also be generalized as a nd game. Tic-tac-toe is the game where n equals 3 and d equals 2.It can be generalised even further by playing on an arbitrary incidence structure, where rows are lines and cells are points.

### Benefits

Tic-tac-toe Game offers a few benefits. Here are just a few of them:

#### Good Sportsmanship

Like any game, tic tac toe also teaches a person to accept the defeat as well as ackowledge the win.

#### Prepares for more complex games

It prepares a person for more complex games because they have to think of multiple things at one time.

#### Developement of Coordination

Tic-tac-toe helps develop coordination, fine motor skills and visual skills.

#### Mannerism

It helps one to learn how to follow rules and take turns.

#### Concentration

It can help to improve a person's concentration as well as strategic thinking

## State of art

### EARLIER

- We have not included several elements to make this simple game more enjoyable.

- Users cannot choose to play a cheerful piano tune in the background.

- You can not select your own avatar.

- only two player allow to play at a time.


### MODERN

- We have included several elements to make this simple game more enjoyable.

- Users can choose to play a cheerful piano tune in the background. Background music and sound effects can of course be turned off in the Options.

- You can also select your own avatar. There are currently 8 to choose from, 4 male and 3 female characters.



## Rules

- The game is played on a grid that's 3 squares by 3 squares.

- You are X, your friend (or the computer in this case) is O. Players take turns putting their marks in empty squares.

- The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.

- When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.

## 4W and 1H

### *WHAT*

Tic-tac is a game for two players who take turns marking the spaces in a three-by-three grid with X or O. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row is the winner.

### *WHY*

This classic game contribute to the children's development growth in numerous ways include their understanding of predictability, problem solving, spatial reasoning, hand eye coordination, turn taking and stratezing.

### *HOW*

- The game is to be played between two people .

- One of the player chooses ‘O’ and the other ‘X’ to mark their respective cells.

- The game starts with one of the players and the game ends when one of the players has one whole row/ column/ diagonal filled with his/her respective character (‘O’ or ‘X’).

- If no one wins, then the game is said to be draw.

## Cost and Features with Time

| TIME | FEATURES | COST |
| --------------- | --------------- | ----------- |
| 1958 | Started as a pen and paper game in Roman Emire, earlier it was called tic tac. | Free (Pen and Paper) | 
| 1952 | In 1952, OXO (or Noughts and Crosses), developed by British computer scientist Sandy Douglas for the EDSAC computer at the University of Cambridge, became one of the first known video games | $5 | 
| 2000-2021 | After Digitalisation, this game is almost free for everyone on multiple mediums| Cost effectiv |

## Defining Our System

![image](https://user-images.githubusercontent.com/94218113/143097068-f1b548dc-0e64-47b8-a1e3-e5778f96ee5a.png)

## Explanation:

- The game starts giving you three input options(1, 2, 3):

      - means you play using 'X'.
      - means you play using 'O'.
      - means you exit the game.

- The game ends when:

         - It is in a draw situation , i.e, a total of 9 moves have been completed and novody has won.
         - You win.
         - The computer wins.
          
- The game continues in the beginning if the check for draw is false.
- Then it checks if anyone has won yet.
- If not, then it again checks if it is a draw situation.
 


# SWOT Analysis

![image](https://user-images.githubusercontent.com/94218113/143097596-3a5d4746-aca6-4b4b-9929-8c5402a2e30a.png)

# DETAIL REQUIREMENTS

## HLR

| HLR | DESCRIPTION |
| --------------- | --------------- |
| HLR_1 | User shall be able to choose 'X' to play | 
| HLR_2 | User shall be able to choose 'O' to play | 
| HLR_3 | User shall be able to Exit the game |
| HLR_4 | User shall lose |
| HLR_4 | User shall win |
| HLR_5 | User shall end up in a Draw situation |

## LLR

| LLR | DESCRIPTION | HLR_ID |
| ------------- | -----------| ---------- |
| LLR_1 | If the user presses '1', he'll be play with 'X'. | HR01 |
| LLR_2 | If the user is playing with 'X', he'll get the first turn. | HR01 |
| LLR_3 | If the user presses '2', he'll be play with 'O'. | HR02 |
| LLR_4 | If the user is playing with 'O', he'll get the second turn. | HR02 |
| LLR_5 | If the user presses '3', it'll exit the game. | HR03 |
| LLR_6 | If the computer gets 3 Xs or 3 Os in vertical,horizontal or diagonal row, User will lose. | HR03 |
| LLR_7 | If the user gets 3 Xs or 3 Os(as per his choice), in vertical,horizontal or diagonal row, he'll win. | HR04 |
| LLR_8 | If the total number of moves, i.e., 9 moves have been completed and neithe the user nor the computer has won, it'll end up in a draw. | HR04 |


