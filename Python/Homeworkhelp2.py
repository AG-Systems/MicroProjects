board = ["-", "-", "-",
         "-", "-", "-",
         "-", "-", "-"]
counter = 0
maxCounter = 9
print(board[0] + board[1] + board[2])
print(board[3] + board[4] + board[5])
print(board[6] + board[7] + board[8])
while(counter < maxCounter):
    location = int(input("Pick a location, 1-9: "))
    if counter %2 == 0:
        board[location - 1] = "X"
    else:
        board[location - 1] = "O"    
    print(board[0] + board[1] + board[2])
    print(board[3] + board[4] + board[5])
    print(board[6] + board[7] + board[8])
    counter += 1
