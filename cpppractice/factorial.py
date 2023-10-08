n = int(input("enter the number of factorial"))
fact = 1
for i in range(1,n+1):
    fact = fact *i

print(fact)

print(len(str(fact)))
# print(fact^int(len(str(fact))))