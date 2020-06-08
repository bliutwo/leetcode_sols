mat = [[1,1,0,0,0],
 [1,1,1,1,0],
 [1,0,0,0,0],
 [1,1,0,0,0],
 [1,1,1,1,1]]
 
l = [(sum(row), i) for i, row in enumerate(mat)]
print(l)

l.sort(key=lambda x: x[1])

print(l)