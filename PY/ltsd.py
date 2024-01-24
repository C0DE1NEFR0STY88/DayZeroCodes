#ltsd


#lists => []

Lblank=[]
L0=[1,2,3,6,5,7,8,4,4,8,2] #can have repeated values
L1=["List","of","strings"]
L2=[1,2,"List",3,4,5,"of",'strings',8,7,5,6,"and",8,9,0,'numbers'] #(') or (") doesn't make a difference

print(Lblank) #!!!printing a blank list!!!
print("Printing specific elements from various lists: ",L1[0],L2[3],L0[8])
print("Printing an entire list (strings and num in one): ",L2)

print("\n")

L0.append(11)
L0.append(22)
#append can only send one element in and that too at the end
#for adding a (only one element still) new element at a specific location:
L2.insert(3,"new ele 1")
L2.insert(8,"new ele 2")
print(L0)
print(L2)

#!!!!!!!!!!!!!!!!exec(open("untitled.py").read()) 
#must be in the same path as this .py file. 
#works with online gdb; (press ctrl+m to create new file)
#https://www.onlinegdb.com/


#tuple => ()



#https://www.geeksforgeeks.org/python-lists/

#https://www.geeksforgeeks.org/differences-and-applications-of-list-tuple-set-and-dictionary-in-python/
