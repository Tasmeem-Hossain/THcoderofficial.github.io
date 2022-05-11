import random
random_number = random.randint(1, 10)
input_num = int(input("guess a number: "))
if input_num == random_number:
    print("You win")
if input_num > random_number:
    print("its too high to guess")
if input_num < random_number:
    print("its too low")