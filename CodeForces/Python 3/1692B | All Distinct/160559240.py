t=int(input())
while t>0:
    t=t-1
    n=int(input())
    arr = [int(x) for x in input().split()]
    se=set(arr)
    p=0
    s=0
    for e in se:
        if arr.count(e)%2==1:
            p+=1
        if arr.count(e)%2==0:
            s+=1
    if s%2==0:
        p+=s
    if s%2==1:
        p+=s
        p-=1
    print("{}".format(p))
 
 
 
 
 
 