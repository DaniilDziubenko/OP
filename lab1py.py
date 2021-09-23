import math

a = int(input("Enter the first side of the triangle: "))
b = int(input("Enter the second side of the triangle: "))
c = int(input("Enter the third side of the triangle: "))

angle1 = float()
angle2 = float()
angle3 = float()

angle1 = round((math.acos((a*a+b*b-c*c)/(2*a*b))*180)/3.14)
angle2 = round((math.acos((a*a+c*c-b*b)/(2*a*c))*180)/3.14)
angle3 = round((math.acos((b*b+c*c-a*a)/(2*c*b))*180)/3.14)

print("First angle - ",angle1," (degrees) / ",round(math.acos((a*a+b*b-c*c)/(2*a*b)),2)," (radians)")
print("Second angle - ",angle2," (degrees) / ",round(math.acos((a*a+c*c-b*b)/(2*a*c)),2)," (radians)")
print("Third angle - ",angle3," (degrees) / ",round(math.acos((b*b+c*c-a*a)/(2*c*b)),2)," (radians)")