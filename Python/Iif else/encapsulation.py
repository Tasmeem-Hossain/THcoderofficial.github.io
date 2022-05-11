class Car:
    def __init__(self):
        self.__maxspeed =100

    def get_speed(self):
       return self.__maxspeed

    def set_speed(self, speed):
        self.__maxspeed = speed


porsche = Car()
print(porsche.get_speed())
porsche.set_speed(200)
print(porsche.get_speed())
