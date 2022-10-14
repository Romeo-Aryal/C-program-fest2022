def add(fir,sec):
    return int(fir)+int(sec)
def dif(fir,sec):
    return int(fir)-int(sec)

fir = input("enter first no : ")
sec = input("enter sec no : ")
print(f"The addition of {fir} & {sec} : "+str(add(fir,sec)))
print(f"The Subtraction of {fir} & {sec} :"+str(dif(fir,sec)))
