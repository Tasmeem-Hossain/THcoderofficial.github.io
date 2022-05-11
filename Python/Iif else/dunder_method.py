class person:
    def __init__(self, name,age):
        self.name = name
        self.age = age

    def __str__(self):
        return "name of person: {},\
    age of person: {}".format(self.name, self.age)
person = person('tanim', 20)

print(person)
str(person)
"{}".format(person)