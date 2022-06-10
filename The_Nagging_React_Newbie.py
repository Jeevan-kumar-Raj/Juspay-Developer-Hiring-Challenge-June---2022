N=int(input())
dic={}
def addnode(u,v):
    dic[u].append(v)
for i in range(N):
    n1=int(input())
    dic[n1]=[]
    
edge=int(input()) 
for i in range(edge):
    u,v=map(int,input().split())
    addnode(u,v)
start=int(input())
end=int(input())
tr=[]
tr.append(start)
def traverse(dic,start):
    for i in dic[start]:
        if(i==end):
            return
        if(len(dic[start])==0):
            return
        else:
            tr.append(i)
            traverse(dic,i)
            
traverse(dic,start)
tr=sorted(tr)
for i in tr:
    print(i,end=" ")