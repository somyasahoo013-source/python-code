class Circle:
    def __init__(self,radius):
        self.radius=radius

    def Area(self):
        area=self.radius*self.radius*3.14
        print("Area is :",area)

    def Perimeter(self):
        perimeter=2*3.14*self.radius
        print("Perimeter is : ",perimeter)

c1=Circle(7)
c1.Area()
c1.Perimeter()
