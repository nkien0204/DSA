def CountNrChar (string):
  count={}
  for i in string:
    if i == ' ':
      continue
    if i in count:
        count[i] +=1
    else:
        count[i] = 1
  
  print(count)

CountNrChar ("This!! this THIS###")