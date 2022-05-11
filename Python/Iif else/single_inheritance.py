class rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width

class square(rectangle):
    def __init__(self, length):
        super().__init__(length,length)
'''
multilevel inheritance
'''
class cube(square):
    def surface_area(self):
        face_area = super().area()
        return face_area * 6

    def volume(self):
        face_area = super().area()
        return face_area * self.length


square = square(2)
square.area()
print(square.area())

print("------------------------")

cube = cube(3)
print(cube.surface_area())
print(cube.volume())