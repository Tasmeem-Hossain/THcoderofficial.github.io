class Car:
    def __init__(self, speed):
        self._maxspeed = speed

    @property
    def maxspeed(self):
        return self._maxspeed

    @maxspeed.setter
    def maxspeed(self, speed):
        if speed > self.maxspeed:
            self._maxspeed = speed


ferrari = Car(200)
print(ferrari.maxspeed)
ferrari.maxspeed = 300
print(ferrari.maxspeed)
