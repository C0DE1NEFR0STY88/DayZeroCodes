a = 0
b = 1
c = 0 #setting up c here is useful if generating wrt a range


n = int(input("Enter number of elements to be generated: "))
#if we are generating based on range, ie. an upper limit => "Enter range: "
print(a)
print(b)


for i in range(n): 
#while (c<=n): #use 'while' if generating for a range. 
#if resource constraint is too aggressive, such that repeated addition needs optimisation, SWITCH TO C++.
    c=a+b
    print(c) #if we are gen. for a range, #if (c<=n): flag should be setup (pre c print) inorder to avoid target overflow
    a=b
    b=c
