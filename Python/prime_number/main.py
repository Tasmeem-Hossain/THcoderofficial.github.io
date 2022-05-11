number1 = int(input("Enter a number: "))
flag = False
if number1 > 1 :
 for i in range(2, number1):
  if (number1 % i) == 0:
   flag = True
   break
 if flag:
   print("not is prime")

 else:
  print("is prime")