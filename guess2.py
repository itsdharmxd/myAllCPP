
import math as m
from sys import stdin as i
from sys import stdout as o
import sys

n = int(i.read())
start = 0; end = n; mid = m.ceil((start + end) / 2)
L = 'L\n'
G='G\n'
E='E\n'
while start <= end:
    o.writelines(str(mid) + "\n")
    o.flush()
    a = str(i.readline())
    if (a == E):
        exit()
    
    o.writelines(str(mid) + "\n")
    o.flush()
    b = str(i.readline())
    if (b == E):
        exit()
    if a == b:
       
        if a == L:
           
            end=mid
        elif a == G:
            start = mid
            
            
    elif a != b:
        o.writelines(str(start) + "\n")
        o.flush()
        c = i.readline()
        if (c == E):
            exit()
        if c == L:
            if b == L:
               end = mid
            elif b == G:

               start = mid
        elif c == G:
            d = L
            while d != G:
                o.writelines(str(end) + "\n")
                o.flush()
                d = i.readline()
                if (d == E):
                     exit()
            o.writelines(str(mid) + "\n")
            o.flush()    
            d = i.readline()
            if (a == E):
                 exit()
            if d == L:
                 end = mid
            elif d == G:
                 start = mid
    mid = m.ceil((start + end) / 2)
    

