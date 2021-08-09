n = int(input())
for i in range(n):
    text = input()
    if(len(text) > 10):
        print(text[0],len(text)-2,text[len(text)-1],sep="")
    else:
              print(text)
