rows = int (input("Enter the Row: "))
for row in range(1, rows + 1, 1 ):

  for coloum in range(1, row+1):
        print(coloum, end='  ')

  print("   ")