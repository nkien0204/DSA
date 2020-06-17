def PrintTriangular():
  print ("Enter line number: ")
  s = int(input())
  if s < 1:
    pass
  for i in range(2*s-1):
    if i <= s - 1:
      print((i+1) * '*')
    else:
      print((2*s-i-1) * '*')

PrintTriangular()