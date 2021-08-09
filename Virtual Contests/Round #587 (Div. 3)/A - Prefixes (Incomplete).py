a = 0
b = 0
n = int(input())
cont = 0
word = list(input())
for i in range(2,n+1,2):
    for j in range(i):
        if(word[j]=='a'):
            a+=1
        else:
            b+=1
    l = i
    for k in range(abs(a-b)):
        if a>b and word[i-l] == 'a':
            word[i-2] = 'b'
            a-=1
            b+=1
            cont+=1
        elif b>a and word[i-l] == 'b':
            word[i-2] = 'a'
            b-=1
            a+=1
            cont+=1
        if b==a:
            break
        else:
            l-=1
print(cont)
for i in range(len(word)):
    if(i!=len(word)-1):
        print(word[i],end='')
    else:
        print(word[i])
