class Dog:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def info(self):
        print("Lassie is", str(self.age), "years old")




lassie = Dog("Lassie",10)
lassie.info()