#mega comp

#tech_vals=>input arr;list;sort();reversed();key;random();if;while;sleep();seed();for;platform.system();os.system();
            
import random
import time
import os
import platform

def randomfunc():
    random.seed(time.time())
    for i in range(20):
        print(random.random())
        time.sleep(1) #in seconds

def clearscreen():
    if(platform.system()=='Windows'):
        os.system('cls')
    elif(platform.system()=='Linux'):
        os.system('clear')
        #Windows: os.name == 'nt'; Mac/Linux/BSD: os.name == 'posix'


#mainline
#int_arr=list(map(int, input().split())) #user i/p int array

int_arr=[23,13,14,34,25,245,1,13,457,76,8865] #here we directly used square bracket instead of flagging with list keyword

print("The current array build is: ",int_arr)
int_arr.sort() #sort function
print("The sorted array build is: ",int_arr)
int_arr.sort(reverse=True) #reverse sort; True with uppercase T. reverse() not reversed()
print("The reverse sorted build is: ",int_arr)

print("\n")

str_list=["This","is","a","list","of","strings"]
print("The current string list structure is: ",str_list)
str_list.sort()
print("Sorted string list: ",str_list) #sort() by DEFAULT SORTS WRT ASCII VALUES. ∴ Uppercase ends up being first
str_list_rev=list(reversed(str_list)) #used reversed() here not reverse()
print("Revresed() impact: ",str_list_rev)
str_list.sort(key=len) #sort() using a KEY value; will sort based on length of each string
print("Sorted using key val(len): ",str_list) #if multiple same size, then it defaults to ASCII val

print("\n")

random_choice=input("Would you like to launch the random function module? (Control will be taken away for 20 seconds) (Y/N): ")
if(random_choice=='Y' or random_choice=='y'):
    randomfunc()
    loopflag=1
    while loopflag==1:
        random_choice_repeat=input("Launch random () module again? (Would clear screen) (Y/N)?: ")
        if(random_choice_repeat=='Y' or random_choice_repeat=='y'):
            clearscreen() #userdefined
            randomfunc()
        elif(random_choice_repeat=='N' or random_choice_repeat=='n'):
            loopflag=0
            break
        else:
            print("Incorrect choice.")
print("Random segment completed.")




#https://www.geeksforgeeks.org/sort-in-python/
#https://www.geeksforgeeks.org/python-reversed-function/
#https://www.geeksforgeeks.org/python-random-module/
#https://stackoverflow.com/questions/27276135/python-random-system-time-seed
#https://www.programiz.com/python-programming/time/sleep
#https://docs.python.org/3/howto/curses.html
#https://docs.python.org/3/library/platform.html#module-platform
#https://www.geeksforgeeks.org/clear-screen-python/
#https://stackoverflow.com/questions/110362/how-can-i-find-the-current-os-in-python
