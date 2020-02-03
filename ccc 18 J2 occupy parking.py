n = input()
yest = input()
tod = input()
count = 0

for i in range(int(n)):
    if((yest[i] == 'C' )and (yest[i] == tod[i])):
        count +=1
    
print(count)
