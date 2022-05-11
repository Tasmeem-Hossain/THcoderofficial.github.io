class animal:
    def __init__(self, name):
        self.name = name

    def talk (self):
        raise NotImplementedError("abstract method")

class Cat(animal):
    def talk(self):
        return "meaw"

class Dog(animal):
    def talk(self):
        return "wof! wof!"

animals = [Cat("missy"),Cat("grumpy Cat"), Dog("lassie")]
for animal in animals:
    print(animal.name + ":" + animal.talk())